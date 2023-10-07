#include<iostream>
#include<CTYPE.h>
using namespace std;
int main(){
int a,b,c,d;
float sum,sum2;
float sum3;
char ch;
cout<<"Enter First fraction:";
cin >> a >> ch >>b;
cout<<"Enter Second fraction:";
cin>>c>>ch>>d;
sum= a*d + c*b; 
sum2=b*d;
sum3=sum/sum2;
cout<<"Sum= "<<sum3<<" = "<<sum<<ch<<sum2;
return 0;
}
