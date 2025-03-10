#include <iostream>
#include <cmath>
using namespace std;
int main()

{
 double a;
 double b;
 double c;
    cout<<"Enter Perpendicular: ";
        cin>>a; //takes user input and store in variable name a 
    cout<<"Enter Base: ";
        cin>>b;
 c = sqrt(pow(a,2)+pow(b,2)); //pow for power and sqrt for square root
cout<<"This is your Hypotenuse: "<<c;
}
