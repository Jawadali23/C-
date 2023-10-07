#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
int main(){
/*int count =0;
do {
cout<<setw(5)<<count;
count++;
}
while(count<=10);
cout<<"\nEnd of loop";*/
int chcount=0;
int wdcount=1;
char ch='a';
cout<<"Enter a phrase: ";
while (ch !='\r') // Loop until Enter Type (while loop continues executed until press the Enter   )
{
    ch= getche();
    if (ch==' ')
    wdcount++;
    else
    chcount++;
}
cout<<"\nWords="<<wdcount<<endl;
cout<<"Letters="<<(chcount-1)<<endl;
return 0;
}