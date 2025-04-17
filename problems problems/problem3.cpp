// Task:
// Write a C++ program using a while loop that:

// Prompts the user to enter a positive integer n.
// Uses a while loop to calculate the sum of all numbers from 1 to n.
// Prints the resulting sum.
 
 
 #include <iostream>
 using namespace std;
 int main(){
  cout <<" Enter the Number: ";
  int n;
  cin >>n;

  int i = 0;
  int sum = 0;
  while(i<=n){
    sum = sum + i;
    i++;
  }
  cout<<"The sum is " <<sum;
   return 0;
  }
 