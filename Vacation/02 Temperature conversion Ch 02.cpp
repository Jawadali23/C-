//Convert Fahrenheit to Celsius
//And Convert Celsius to Fahrenheit
#include<iostream>
using namespace std;
int main(){	
short Tem;
float a,b,cel,fah;
cout<<"Type 1 for Fahrenheit and Type 2 for Celsius\n";
cin>>Tem;
switch (Tem){
case 1:
cout<<"Enter Temperature in Fahrenheit: ";
cin>>a;
cel=(a-32)*5/9;
cout<<"In Celsius that's: "<<cel;
break;
case 2:
cout<<"Enter Temperature in Celsius:";
cin>>b;
fah=(b*9/5)+32;
cout<<"In Fahrenheit that's: "<<fah;
break;
default:
cout<<"Error";
}
return 0;
}
