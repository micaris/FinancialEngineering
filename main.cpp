//
//  main.cpp
//  FinancialEngineering
//
//  Created by Michael Osinowo on 25/09/2022.
//

#include <iostream>
#include <vector>
#include <cmath>
#include "./InterestRateCalculator/IntRateCalculator.hpp"
#include "./CashFlowCalculator/CashFlow.hpp"



int main(int argc, const char * argv[]) {

    if (argc != 2) {
        
        std::cout << "usage: cashflow <rate> " << std::endl;
        return 1;
    }
    
    double rate = atof(argv[1]);

    CashFlow cfc(rate);

    do{
        int period;
        std::cin >> period;
        if (period == -1){
            break;
        }
        double value;
        std::cin >> value;
        cfc.addCashPayment(value, period);
    }
    while(1);

    double result = cfc.presentValue();
    std::cout << "The present value is " << result << std::endl;
    return 0;



    return 0;
}




