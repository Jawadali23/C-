#include<iostream>
using namespace std;
int main(){
double a;
int b;
float x;
cout<<"Enter Initial Number:";
cin>>a;
cout<<"Enter number of years:";
cin>>b;
cout<<"Enter interest rate(Percent per year):";
cin>>x;
x=x/100;
for(int i=1;i<=10;i++)
{	
int ans=a+(a*x);
a=ans;
cout<<i<<" year "<<a<<endl;
}

return 0;
}
