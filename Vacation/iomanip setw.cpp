#include<iostream>
#include<iomanip>
using namespace std;
int main(){
for(int i=0,alpha=100;i<=10;i++,alpha--)
{
cout<<setw(8)<<"First"<<i*alpha;
cout<<setw(9)<<"Second"<<alpha<<endl;
}
    return 0;
}