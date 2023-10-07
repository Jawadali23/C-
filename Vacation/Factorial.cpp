#include<iostream>
using namespace std;
const unsigned long limit =527;
int main(){
unsigned long next=0;
unsigned long last=1;
while(next<limit){
cout<<last<<" ";
long sum=next + last;
next =last;
last =sum;	
	
}	
	return 0;
}
