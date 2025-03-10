#include <iostream>
using namespace std;
int main(){
char op;
double a;
double b;
double result;
    cout<<"***********************************\n";
    cout<<"            calculator             \n";
cout<<"( only + _ * / )\n";
  cin>>op;
cout<<"enter No 1:  ";
  cin>>a;
cout<<"enter No 2:  ";
  cin>>b;

switch(op){
  case '+':
      result = a + b ;
      cout<<"Result:  "<<result;
      break;
   case '-':
      result = a - b ;
      cout<<"Result:  "<<result;
      break;
case '*':
      result = a * b ;
      cout<<"Result:  "<<result;
      break;
case '/':
      result = a / b ;
      cout<<"Result:  "<<result;
      break;
 default:
    cout<<"error";break;


}


}