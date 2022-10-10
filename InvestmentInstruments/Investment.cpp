#include "Investment.hpp"
#include <vector>


// Bond Instrument definition
BondInst::BondInst(double monthlyPay, double principal): m_monthlyPay(monthlyPay), m_principal(principal) {}
BondInst::BondInst(const BondInst &b): m_monthlyPay(b.m_monthlyPay), m_principal(b.m_principal){}
BondInst &BondInst::operator =(const BondInst &b) {
    if (this != &b){
        this->m_monthlyPay = b.m_monthlyPay;
        this->m_principal = b.m_principal;

    }
    return *this;
}
double BondInst::getMonthlyPayment(){
    return m_monthlyPay;
}

double BondInst::getPrincipal(){
    return m_principal;
}

BondInst::~BondInst() {}


//Mortgage Instrument definition

MortgageInst::MortgageInst(double monthlyPay, double propertyVal, double downPay):
m_monthlyPay(monthlyPay), m_propertyValue(propertyVal), m_downPayment(downPay){}

MortgageInst::MortgageInst(const MortgageInst &m):
m_monthlyPay(m.m_monthlyPay), m_propertyValue(m.m_propertyValue), m_downPayment(m.m_downPayment){}

MortgageInst &MortgageInst::operator=(const MortgageInst &m){
    if(this != &m){
        this->m_monthlyPay = m.m_monthlyPay;
        this->m_propertyValue = m.m_propertyValue;
        this->m_downPayment = m.m_downPayment;
    }
    return *this;
}
MortgageInst::~MortgageInst(){}

double MortgageInst::getMonthlyPayment(){
    return m_monthlyPay;

}

double MortgageInst::getPrincipal(){
    return m_propertyValue - m_downPayment;
}


