// Writing a program to print an address
// Header files or Libraries
#include <iostream>
#include <string>
using namespace std;

// Main Function
int main () {
    // Declaration of variables
    int streetNum, stateZipCode;
    string streetCity, stateName;
    // Receiving input from user
    cout << "Street-number: ";
    cin >> streetNum;
    cout << "Street city: ";
    cin >> streetCity;
    cout << "State name: ";
    cin >> stateName;
    cout << "State zip-code: ";
    cin >> stateZipCode;
    // Outputting the result
    cout << "Your address is: " << streetNum << "," << streetCity << "," << stateName << "," << stateZipCode << endl;
    return 0;
}