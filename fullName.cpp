// Writing a program to print full name
// Header files or libraries in c++
#include <iostream>
#include <string>
using namespace std;

//Main Function
int main () {
    // Declaration of variables
    string lastName;
    string firstName;
    // Receiving input from user
    cout << "Enter your last name here: ";
    cin >> lastName;
    cout << "Enter your first name here: ";
    cin >> firstName;
    // Outputting result
    cout << "Your full name is: " << lastName << " " << firstName;
    return 0;
}