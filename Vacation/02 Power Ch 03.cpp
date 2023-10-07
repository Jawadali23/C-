#include<iostream>
using namespace std;
int power(double n,int p)
{
double result=1;
for(int i=1;i<=p;i++)
{
result*=n;
}
return result;
}
int main(){	
double n;
int p;
cout<<"Enter the Number:";
cin>>n;	
cout<<"P Times:";
cin>>p;
cout<<power(n,p);

	return 0;
}
