#include<iostream>
using namespace std;
int main(){
float decpounds;
int pounds;
float decfrac,pence;
float shillings,fra;
char ch=156,c=46;
cout<<"Enter decimal Pounds:";
cin>>decpounds;
pounds=int(decpounds);
decfrac=decpounds-pounds;
shillings=decfrac*20;
pence=int(shillings);
fra=shillings-pence;
cout<<"Pounds:"<<pounds<<"\nDecimal fraction:"<<decfrac;
cout<<"\nShillings:"<<shillings<<"\nPence:"<<fra<<endl;
cout<<ch<<pounds<<c<<shillings;
return 0;
}
