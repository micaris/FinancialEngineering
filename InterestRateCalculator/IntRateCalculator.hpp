//
//  IntRateCalculator.hpp
//  FinancialEngineering
//
//  Created by Michael Osinowo on 25/09/2022.
//

#ifndef IntRateCalculator_hpp
#define IntRateCalculator_hpp

#include <stdio.h>

class InterestRateCalculator {

public:
    
    InterestRateCalculator( double rate); // Constructor
    InterestRateCalculator(const InterestRateCalculator &v); // copy constructor
    InterestRateCalculator  &operator=(const InterestRateCalculator &v); // assignment operator
    ~InterestRateCalculator();
    
    double singlePeriod(double principal);
    
    double multiPeriod(double principal, int t_period);
    
    double continuousCompunding(double principal, int t_period);
    
    double presentValue(double final_value, int t_period);
    
private:
    double m_rate;
};

inline double InterestRateCalculator::singlePeriod(double principal){
    return principal*(1 + this->m_rate);
}


#endif /* IntRateCalculator_hpp */
