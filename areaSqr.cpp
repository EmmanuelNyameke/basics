// Writing a code to calculate the area and perimeter of a square with one length given
// header files in C++ or Libraries
#include <iostream>
#include <string>
using namespace std;

// Main Function
int main () {
    // Declaration of Variables
    int length;
    string unit;
    int area;
    int perimeter;
    // Outputting and receiving input from user
    cout << "Enter the length of the square: ";
    cin >> length;
    cout << "Enter the unit of the square (cm or m or mm, etc): ";
    cin >> unit;
    // Formula for finding the area of a square = side * side
    area = length * length;
    // Outputting the result to the user
    cout << "The area of the square is: "<< area << unit << 2 << endl;
    // Formula for finding the perimeter of the square = 4 * side
    perimeter = 4 * length;
    // Outputting the result
    cout << "The perimeter of the square is: "<< perimeter << unit << endl; 
    return 0;
}
