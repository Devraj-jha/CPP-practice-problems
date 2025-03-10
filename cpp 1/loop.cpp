#include <iostream>
#include <string>
using namespace std;
int main(){

//while loop exetures a function untill the condition is ture
string name;
while(name.empty()){

  cout<<"enter yuou name:  ";
  getline( cin , name);

}
cout<<"hello"<<name;
//it bascially makeas the user stuck for infinte amount ovf time
//do while loop - it executes the block of code first then check the conditon
int number;
do{

  cout<<"enter a positive no. ";
  cin>>number;
}while(number<0);
cout<<"this no. is positive   ";

//for loop 
//exteutres a block of code certain amount of time 
for(int i=1; i<100;i++){
cout<<i <<"\n" ;
}
}
