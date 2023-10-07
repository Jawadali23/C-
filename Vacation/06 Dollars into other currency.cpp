// Converte Dollars into other currency
#include<iostream>
using namespace std;
int main(){
float a,b,c,d;
int x;
cout<<"Enter an amount in Dollars: ";
cin>>x;
a=x/0.67249;
b=x/5.8139;
c=x/1.712;
d=x/104.712;
cout<<"Dollars into pounds: "<<a<<endl;
cout<<"Dollars into french franc: "<<b<<endl;
cout<<"Dollars into German deutschemark: "<<c<<endl;
cout<<"Dollars into Japanese yen: "<<d<<endl;
return 0;	
}
