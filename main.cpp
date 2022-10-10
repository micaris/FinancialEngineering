//
//  main.cpp
//  FinancialEngineering
//
//  Created by Michael Osinowo on 25/09/2022.
//

#include "./InterestRateTemplate/IntRateEng.hpp"
#include "./InvestmentInstruments/Investment.hpp"

#include <iostream>
#include <vector>
#include <cmath>


int main() {


BondInst bond(40000, 250);
MortgageInst mortgage(250, 50000, 5000);
IntRateEngine<BondInst> engA(bond);
IntRateEngine<MortgageInst> engB(mortgage);

 std::cout << " bond annual int rate: " << engA.getAnnualIntRate()*100 << "%" << std::endl;
 std::cout << " mortgage annual int rate: " << engB.getAnnualIntRate()*100 << "%" << std::endl;
 return 0;

}




