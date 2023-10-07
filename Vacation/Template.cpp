#include<iostream>
using namespace std;
template<class t,class t>
class Myclass{
private:
t var;
t var2;
public:
Myclass(t a,t b)
{
t var=a;
t var2=b;
}
t display()
{
cout<<"Sum of the numbers "<<a<<b;
return a+b;
}
};
int main() 
{
Myclass<float>obj(2.14,3.2);
obj.display();
return 0;
}
