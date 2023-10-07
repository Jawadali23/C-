#include<iostream>
using namespace std;
float circarea(float area,int r );
int main(){
int r;
float a;
cout<<"Enter the radius: ";
cin>>r;			
cout<<"Area of the Circle: "<<circarea(a,r);
return 0;
}
float circarea(float area,int r)
{
area=3.14*r*r;	
return area;
}
