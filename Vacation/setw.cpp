#include<iostream>
#include<iomanip> // for setw
using namespace std;
int main()
{
//int cube;
int numb;
for(numb=1;numb<=10;numb++){
    cout<<setw(4)<<numb;
    int cube=numb*numb*numb;
    cout<<setw(6)<<cube<<endl;
}
//cout<<cube;
return 0;
}