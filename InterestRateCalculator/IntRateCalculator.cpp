//
//  IntRateCalculator.cpp
//  FinancialEngineering
//
//  Created by Michael Osinowo on 25/09/2022.
//



#include "IntRateCalculator.hpp"
#include <cmath>

InterestRateCalculator::InterestRateCalculator(double rate):m_rate(rate){}

InterestRateCalculator::InterestRateCalculator(const InterestRateCalculator &v):m_rate(v.m_rate){}

InterestRateCalculator::~InterestRateCalculator(){}

InterestRateCalculator &InterestRateCalculator::operator=(const InterestRateCalculator &v){
    if (this != &v){
        this->m_rate = v.m_rate;
    }
    return *this;
}

double InterestRateCalculator::multiPeriod(double principal, int t_period){
    
    double result = principal*pow((1 + m_rate), t_period);
    return result;
}

double InterestRateCalculator::continuousCompunding(double principal, int t_period){
    double result = principal*exp(m_rate*t_period);
    return result;
}

double InterestRateCalculator::presentValue(double final_value, int t_period){
    double result = final_value/pow((1+m_rate), t_period);
    return result;
}

