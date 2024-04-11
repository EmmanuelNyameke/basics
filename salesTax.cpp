// Writing a program to calculate the sales tax of transaction
// Header files or libraries
#include <iostream>
using namespace std;

// Main Function 
int main () {
    // Declaration Of Variables
    double sales;
    double totalTaxRate, totalSales;
    const double taxRate = 0.09;
    //Receiving input from user
    cout << "Sales amount: ";
    cin >> sales;
    cout << "Tax amount: " << taxRate << "%" << endl;
    // Formula for finding the sales tax of a transaction
    totalTaxRate = taxRate / 100;
    totalSales = sales * totalTaxRate;
    // Outputting the result
    cout << "Total amount due: " << totalSales;
    return 0;
}