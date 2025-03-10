// Practice Question:
// Now that we've covered data types, variables, and operators:

// Exercise:
// Write a C++ program that:

// Declares two floating-point variables (float or double).
// Prompts the user to enter values for these variables.
// Calculates and prints the following:
// Their sum.
// Their difference.
// Their product.
// Their quotient (make sure to handle division by zero).
// Additionally, declare a bool variable that checks if the product is positive and prints an appropriate message.
// Use a char variable to store a single character of your choice and print it.


#include <iostream>
using namespace std;

int main() {
    float a ;
    double b;
    cin>>a;
    cin>>b;
    cout<<"Their sum is"<<a +b;
    cout<<"Their difference is"<<a -b;
    cout<<"Their product is"<<a *b;
    if(b == 0) {
      cout<<"Can't be divided by zero";

    }
    else{
      cout<<"The quotient is "<<a/b;
    }
    bool ispositive;
    ispositive = a*b > 0;
    if(ispositive){
     cout<<"The Product is positive";
    }
    char c;
    cin >> c;
    cout << "The character is "<<c ;

    return 0;
}
