#include <iostream>
using namespace std;
int main(){
cout<<"Tempereture convertor \n";
cout<<"only enter c and f in which unit you want to convert\n";
char degree;
double temp;
cin>>degree;
if(degree == 'F' || degree == 'f'){
    cout<<"Enter the temperature in celcius:  ";
    cin>>temp;
    temp = (1.8*temp)+32.0;
    cout<<"tempereature is: "<<temp<<" F\n";

}
else if(degree == 'C' || degree == 'c'){
    cout<<"Enter the temperature in farenhite:  ";
    cin>>temp;
    temp = (temp-32)/1.8;
    cout<<"tempereature is "<<temp<<" C\n";

}
else {
  cout<<"enter something valid";
}


}

