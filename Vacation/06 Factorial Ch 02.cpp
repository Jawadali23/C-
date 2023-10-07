#include<iostream>
using namespace std;
int main(){
int number;
long factorial=1;
cout<<"Enter the number: ";
cin>>number;
/*while(number!=0){
factorial=factorial*number;	
number--;
}
cout<<"Factorial is !="<<factorial;*/
do{
factorial =factorial*number;
number--;
}
while(number!=0);
cout<<"factorial is "<<factorial;

return 0;
}
