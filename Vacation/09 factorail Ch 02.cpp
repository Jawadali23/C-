#include<iostream>
using namespace std;
int main(){
int numb, guests;
cout<<"Number of chairs:";
cin>>numb;
cout<<"And Guests:";
cin>>guests;
for(int i=guests;i>=numb;i--){
guests *=numb;

}	
cout<<"Arragement "<<guests;
--numb;
return 0;
}
