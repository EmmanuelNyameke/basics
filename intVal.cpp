// Writing a code that input four integer values and print the sum
#include <iostream>
using namespace std;
// MAIN FUNCTION
int main () {
    // Declaring Variables
    int w;
    int x;
    int y;
    int z;
    int sum;
    // Outputting result to the user and receiving input from the user 
    cout << "Enter the first number: ";
    cin >> w;
    cout << "Enter the second number: ";
    cin >> x;
    cout << "Enter the third number: ";
    cin >> y;
    cout << "Enter the fourth number: ";
    cin >> z;
    // Formula for calculating the sum
    sum = w + x + y + z;
    // Outputting the result
    cout << "The sum of the four integers is " << sum << endl; 
    return 0;
}