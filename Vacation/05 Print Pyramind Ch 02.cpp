#include<iostream>
using namespace std;
int main(){
for(int i=1;i<=5;i++)
{
// first for Rows 
for(int j=1;j<=5-i;j++){
cout<<" ";
}
for(int j=1;j<=i;j++){
cout<<"*"<<" ";
}
cout<<endl;
}
/*for(int j=1;j<=5-i;j++)  // Second for Colums
{	
cout<<" ";	
}
for(int j=1;j<=i;j++)   // In the Same colums this for loop perform task
{
	cout<<"*"<<" ";
}
cout<<endl;
}

for(int i=4;i>=1;i--)
{
for(int j=1;j<=5-i;j++)
{	
cout<<" ";	
}
for(int j=1;j<=i;j++)
{
cout<<"*"<<" ";
}
cout<<endl;
}*/		

return 0;
}

