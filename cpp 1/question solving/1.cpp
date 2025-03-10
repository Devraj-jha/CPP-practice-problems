#include <iostream>
using namespace std;

int main(){

char b;
cin>>b;
    int a =(b);

if (a>=0 && a<=9){
cout<<"This is a numeric value";

}
else if(a>=65 && a<=90) {

  cout << "This is upercase ";

}
else if(a>=97 && a<=122) {

  cout << "This is Lowercase ";

}
else{

  cout<<"enter something valid";
}
}