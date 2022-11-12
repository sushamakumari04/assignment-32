//5. Define a class A having multiple constructors. Define another class B derived from
//class A. Create derived class constructors and show use of constructor in this single inheritance.
#include<iostream>
using namespace std;
class A
{
int  data;
public:
    A(){ cout<<data<<endl;}
    A(int a)
    {
      data=a;
      cout<<data<<endl;
    }

};
class B:public A
{
int item;
public:
    B(){}
    B(int b):A(100)
    {
      item=b;
      cout<<item;
    }
};
int main()
{
B obj(5);

return 0;
}
