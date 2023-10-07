#include<iostream>
#include<CTYPE.h> // Header file for uppercase and lowercase letters converte into
//integer Numbers
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


