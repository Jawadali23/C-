#include<iostream>
#include<iomanip>
using namespace std;
int main(){
char ch=4;
long pop1=2425785,pop2=47,pop3=9761;
cout<<setw(8)<<"LOCATION"<<setfill(ch)<<setw(13)<<"POPULATION"<<endl;
cout<<setw(8)<<"Portcity"<<setw(10)<<pop1<<endl;
cout<<setw(8)<<"Hightown"<<setw(5)<<pop2<<endl;
cout<<setw(8)<<"Lowville"<<setw(7)<<pop3<<endl;
return 0;
}
