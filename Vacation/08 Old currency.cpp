#include<iostream>
using namespace std;
int main(){
unsigned int a,b,c,ans;
long x,y,z;
char ch;
do{
	cout<<"Enter first amount:";
	cin>>ch>>a>>ch>>b>>ch>>c;
	cout<<"Enter Second amount:";
	cin>>ch>>x>>ch>>y>>ch>>z;
	a+=x;
    b+=y;
    c=(c+z)/12;
	cout<<"Total is "<<"$"<<a<<"."<<b<<"."<<c<<endl;
	cout<<"Do you wish to continue (y/n)?";
	cin>>ch;
}
while(ch!='n');

return 0;
}
