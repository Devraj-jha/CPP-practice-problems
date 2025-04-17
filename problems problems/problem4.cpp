#include<iostream>
using namespace std;

int main(){
 
  int n;
  
  int sum = 0;
  
  do{
    cout << "Enter a number";
    cin >>n;
    sum = sum + n;
  }while(n>=0);
  cout << "The sum is" << sum;







  return 0;
}