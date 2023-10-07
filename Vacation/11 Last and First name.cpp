#include<iostream>
#include<iomanip>
using namespace std;
int main(){
cout<<setw(9)<<"Last name"<<setw(12)<<"First name"<<setw(16)<<"Street address";
cout<<setw(9)<<"Town"<<setw(14)<<"State"<<endl;
cout<<"-----------------------------------------------------------"<<endl;
cout<<setw(5)<<"Jones"<<setw(13)<<"Bernard"<<setw(18)<<"109 Pine Lane";
cout<<setw(16)<<"Littletown"<<setw(8)<<"MI"<<endl;	
cout<<setw(7)<<"O'Brian"<<setw(10)<<"Coleen"<<setw(21)<<"42 E. 99th Ave."<<setw(11)<<"Bigcity";
cout<<setw(12)<<"NY\n";
cout<<setw(4)<<"Wong"<<setw(12)<<"Harry"<<setw(25)<<"121 -A Alabama St."<<setw(10)<<"Lakeville";
cout<<setw(9)<<"IL";
return 0;
}
