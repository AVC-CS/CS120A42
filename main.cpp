
//?  [Problem Definition]
//*     Write a program that asks for the weight of the package and
//*     the distance it is to beshipped, and then displays the charges.
//** Input Validation :
//* 	Do not accept values of 0 or less for the weight of the package.
//* 	Do not accept weights of more than 20 kg (this is the maximum weight the company will ship).
//* 	Do not accept distances of less than 10 miles or more than 3,000 miles.
//*     These are the company’s minimum and maximum shipping distances.

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    const double RATE2 = 1.10;
    const double RATE6 = 2.20;
    const double RATE10 = 3.70;
    const double RATE20 = 4.80;
    double weight, distance, dRate, price;

    cout << "Enter the package weight and distance\n";
    cin >> weight >> distance;

    /*
    Code your program here
    */

    // Use the following statements to print output
    cout << setprecision(2) << fixed;
    cout << "The shipping price for package is " << price << endl;
}