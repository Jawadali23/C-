#include<iostream>
using namespace std;
int main(){
float a,b,c,d,ans;
char ch,oper;
do{
cout<<"Enter first fraction number,Operator, Second fraction number:";
cin>>a>>ch>>b>>oper>>c>>ch>>d;	
switch (oper)
{
case '+':
ans=(a*d + b*c) / (b*d);
cout<<"Addition: "<<ans<<endl;
break;
case '-':
ans=(a*d - b*c) / (b*d);
cout<<"Subtraction:"<<ans<<endl;
break;
case '*':
ans=(a*c) / (b*d);
cout<<"Multiplication:"<<ans<<endl;
break;
case '/':
ans = (a*d) / (b*c);
cout<<"Division: "<<ans<<endl; 
break;
default:
	cout<<"Error";
}
cout<<"Do you want to continue (y/n)?:";
cin>>ch;
}	
	while (ch!='n');
		
	return 0;
}
