#ifndef Investment_hpp
#define Investment_hpp

#include <stdio.h>
#include <vector>

class BondInst
{
public:

    BondInst(double principal, double monthlyPayment);
    ~BondInst();
    BondInst(const BondInst &b);
    BondInst &operator = (const BondInst &b);

    double getMonthlyPayment();
    double getPrincipal();

private:

    double m_monthlyPay, m_principal;


};

class MortgageInst

{
public:

    MortgageInst(double monthlyPay, double propertyValue, double downPayment);
    MortgageInst(const MortgageInst &m);
    MortgageInst &operator = (const MortgageInst &m);
    ~MortgageInst();

    double getMonthlyPayment();
    double getPrincipal();

private:

    double m_monthlyPay, m_propertyValue, m_downPayment;


};


#endif /* Investment_hpp */


