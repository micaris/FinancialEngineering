//
//  IntRateCalculator.hpp
//  FinancialEngineering
//
//  Created by Michael Osinowo on 25/09/2022.
//

#ifndef CashFlow_hpp
#define CashFlow_hpp

#include <stdio.h>
#include <vector>

class CashFlow 
{

public:
    CashFlow(double rate);
    CashFlow(const CashFlow &cf);
    CashFlow &operator=(const CashFlow &cf);
    ~CashFlow();

    void  addCashPayment(double value, int timePeriod);
    double presentValue();

private:
    std::vector<double> m_cashPayments;
    std::vector<double> m_timePeriods;
    double m_rate;
    double presentValue(double futureValue, int timePeriod);

};

#endif /* CashFlow_hpp */