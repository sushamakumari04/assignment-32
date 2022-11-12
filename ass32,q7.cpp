//7. C++ Program to illustrate the use of Constructors in single inheritance of your choice.
#include<iostream>
using namespace std;
class A
{
public:
    A(){ cout<<"base constructor called"<<endl;}
};
class B:public A
{
public:
    B()
    {
     cout<<"derived class constructor called"<<endl;
    }
};
int main()
{
B obj;

return 0;
}
