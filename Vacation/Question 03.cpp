#include<iostream>
#include<ctype.h>
using namespace std;
int main(){
char ch;
int a;
cout<<"Enter any letter ";
cin>>ch;
a=islower(ch);
cout<<a;
return 0;
}