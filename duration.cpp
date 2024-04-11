// Writing a code to calculate the duration of a given time in seconds
#include <iostream>
using namespace std;
// MAIN FUNCTION
int main () {
    // Declaration of Variables
    int hours;
    int minutes;
    int seconds;
    int multiSum;
    // Outputting and receiving input from a user.
    cout << "Enter the time duration given to you in hours: ";
    cin >> hours;
    cout << "Enter the time duration given to you in minutes: ";
    cin >> minutes;
    cout << "Enter the time duration given to you in seconds: ";
    cin >> seconds;
    // Formula for converting time duration to seconds - hh*3600 + mm*60 + ss
    multiSum = hours*3600 + minutes*60 + seconds;
    // Displaying the result
    cout << "The duration of the task in the number of hours, minutes, and seconds in seconds is " << multiSum << "s" << endl;
    return 0;
}