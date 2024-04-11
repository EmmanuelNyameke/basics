// Writing a program that prompt user to enter two integers
// Header files or libraries
#include <iostream>
using namespace std;

// Main Function
int main () {
    // Declaration of Variables
    int x, y, sum;
    // Receiving input from user
    cout << "Enter the first number: ";
    cin >> x;
    cout << "Enter the second number: ";
    cin >> y;
    // Formula for printing the sum
    sum = x + y;
    // Outputting the result
    cout << "The sum of the two integers is " << sum; 
    return 0;
}