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
 