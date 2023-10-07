#include<iostream>
using namespace std;
int main(){
int a,b,c;
char ch=156;
double x,y;
cout<<"Enter Pounds:";
cin>>a;
cout<<"Enter Shillings:";
cin>>b;
cout<<"Enter Pence:";
cin>>c;
x=(c/12) + b;
y=(x/20) + a;
cout<<ch<<a<<"."<<b<<"."<<c<<endl;
cout<<"Decimal Pounds = "<<ch<<y;
return 0;

}
