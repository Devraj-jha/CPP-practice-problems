#include <iostream>
using namespace std; 
int main (){

  int a = 5;
  a < 4 ? cout<<"you are good" : cout <<"you are old"; // ternary operator are replaceman to if else
  // (condtion) ? expression 1[exceutes this if ture]: expression 2[if falsse]

// to check if no. is even or odd
int b;
cin>>b;
b % 2 == 1 ? cout<<"you have odd no." : cout<<"this no. is even";
bool hungry= true;
cout<<(hungry ? "you are hungry": "may mbe you are not hungry" );


}
//can alsop be written as 
