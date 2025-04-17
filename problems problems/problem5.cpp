// Declare an array of 5 integers.
// Use a loop to take input for the array.
// Use another loop to print the elements in reverse order.




#include<iostream>
using namespace std;

int main(){

  int arr[5];
  cout << "Enter 5 intergers" <<endl;
  for( int i = 0; i<5; i ++){
    cin>>arr[i];

  }
cout <<" Array in reverse order:" <<endl;
for(int i = 4; i>=0;i--){
  cout << arr[i] << "";

}
cout << endl;


  return 0;
}