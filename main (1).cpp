/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main() {
    double sales = 95000;
    cout << "Sales: $" << sales << endl;
    
    const double stateTaxRate = .04;
    double stateTax = sales * stateTaxRate;
    cout << "State Tax: $" << stateTax << endl;
    
    const double countyTaxRate = .02;
    double countyTax = sales * countyTaxRate;
    cout << "County Tax: $" << countyTax << endl;
    
    double totalTax = stateTax + countyTax;
    cout << "Total Tax: $" << totalTax;
    return 0;
    
}