// Write a C++ program that:

// Declares an unsigned int, short int, and long long int.
// Assigns values to them and prints their values.
// Takes input from the user for an unsigned int and prints whether it's greater than 1000.
// Try it and share your code! 😊

#include<iostream>
using namespace std;

int main(){

  signed int x = -10;
  unsigned int y = 10;
  short int shoty = 344;
  long int L = 34333454;
  long long bigNumber = 353540508535;

  unsigned int d;
  cin>> d;
  if(d>1000){
    cout<<"The number is greater than 1000";
  } else{
    cout<<"The number is less than 1000";
  }





  return 0;
}