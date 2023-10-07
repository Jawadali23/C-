#include<iostream>
#include<conio.h>
#include<process.h>
using namespace std;
int main(){
float a,b,ans;
char ch,oper;
do
{
cout<<"Enter first number, operator, Second number: ";
cin>>a>>oper>>b;
switch(oper){
case '+':
	ans=a+b;
	break;
case '-':
    ans=a-b;
    break;
case '*':	
    ans=a*b;
    break;
case '/':	
    ans=a/b;
    break;
default:
	ans=0;
}
cout<<"Answer= "<<ans;
cout<<"\nDo another (y/n)?";
cin>>ch;
}
while(ch!='n');

return 0;
}
