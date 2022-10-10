#ifndef IntRateEng_hpp
#define IntRateEng_hpp

#include <stdio.h>
#include <vector>

template <class T>
class IntRateEngine
{

public:

    IntRateEngine(T &var);
    ~IntRateEngine();
    IntRateEngine(const IntRateEngine<T> &a);
    IntRateEngine<T> &operator = (const IntRateEngine<T> &a);

    void setInstrument(T &inv);
    double getAnnualIntRate();

private:
    T m_instrument;

};

template <class T>
IntRateEngine<T>::IntRateEngine(T &var):m_instrument(var){}

template <class T>
IntRateEngine<T> &IntRateEngine<T>::operator =(const IntRateEngine<T> &a)
{
    if(this != &a){
        this->m_instrument = a.m_instrument;
    }
}

template <class T>
IntRateEngine<T>::~IntRateEngine(){}

template <class T>
IntRateEngine<T>::IntRateEngine(const IntRateEngine<T> &a): m_instrument(a.m_instrument) {

}

template <class T>
void IntRateEngine<T>::setInstrument(T &inv)
{
 m_instrument = inv;
}

template <class T>
double IntRateEngine<T>::getAnnualIntRate()
{
 double payment = m_instrument.getMonthlyPayment();
 double principal = m_instrument.getPrincipal();
 return (12 *payment) / principal;
}
#endif /* IntRateEng_hpp */