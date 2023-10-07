#include<iostream>
#include<iomanip>
using namespace std;
int main(){
long numb,i;
cout<<"Enter the number ";
cin>>numb;
/*for(int i=1;i<=30;i++)
{
int value=numb*i;
cout<<setw(5)<<value;
if(i==10 || i==20)
cout<<endl;
}
/*i=1;
while(i<=30)
{
cout<<setw(5)<<numb*i;	
if(i==10 || i==20)
cout<<"\n";
++i;*/
i=1;
do
{
cout<<setw(5)<<numb*i;
if(i==10 || i==20)
cout<<endl;
i++;
}
while(i<=30);


return 0;
}
