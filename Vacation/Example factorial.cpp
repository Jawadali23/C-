#include<iostream>
using namespace std;
int main(){
int number;
long fact=1;
int j;
cout<<"Enter a number: ";
//cin>>number;
for(j=5;j>0;j--)
//for( ; ; ) don't show error but repeated unlimited time
//cout<<"waste of time";
fact*=j;
cout<<"Factorial is "<<fact<<endl;
return 0;
}