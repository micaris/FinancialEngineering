//
//  IntRateCalculator.cpp
//  FinancialEngineering
//
//  Created by Michael Osinowo on 25/09/2022.
//



#include "CashFlow.hpp"
#include <cmath>
#include <iostream>

CashFlow::CashFlow(double rate):m_rate(rate){}
CashFlow::CashFlow(const CashFlow &cf): m_rate(cf.m_rate){}
CashFlow::~CashFlow() {}
CashFlow &CashFlow::operator=( const CashFlow &cf) 
{

if (this != &cf){
    this->m_rate = cf.m_rate;
    this->m_cashPayments = cf.m_cashPayments;
    this->m_timePeriods = cf.m_timePeriods;
}
return *this;

}

void CashFlow::addCashPayment(double value, int timePeriod){
    m_cashPayments.push_back(value);
    m_timePeriods.push_back(timePeriod);
}

double CashFlow::presentValue(double futureValue, int timePeriod)
{
    double pValue  = futureValue/pow(1+m_rate,timePeriod);
    std::cout << "value " << pValue << std::endl;
    return pValue;
}

double CashFlow::presentValue(){
    double total = 0;
    for (int i = 0; i < m_cashPayments.size(); i++){
        total += presentValue(m_cashPayments[i], m_timePeriods[i]);

    }
    return total;
}