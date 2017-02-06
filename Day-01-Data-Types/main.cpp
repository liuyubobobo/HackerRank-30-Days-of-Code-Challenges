#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    // Declare second integer, double, and String variables.
    int myInt;
    double myDouble;
    string myStr;

    // Read and save an integer, double, and String to your variables.
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    cin>>myInt;
    cin>>myDouble;
    getline(cin>>ws, myStr);

    // Print the sum of both integer variables on a new line.
    cout<<(myInt+i)<<endl;

    // Print the sum of the double variables on a new line.
    cout<<fixed<<setprecision(1)<<(myDouble+d)<<endl;

    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    cout<<s<<myStr<<endl;

    return 0;
}