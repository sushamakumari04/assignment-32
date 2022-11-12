//4. Define a class Addition that can add 2 or 3 numbers of different data types using function overloading.
#include<iostream>
using namespace std;
class Addition
{
private:
    int l,m,n;
public:
    Addition(int a,int b,int c)
    {
     l=a;
     m=b;
     n=c;
     cout<<"addition is "<<l+m+n<<endl;
    }
    Addition(int a,int b)
    {
     l=a;
     m=b;
     cout<<"addition is "<<l+m<<endl;
    }
    Addition(double a,double b)
    {
      cout<<"addition is "<<a+b<<endl;
    }
    Addition(double a,double b,double c)
    {
      cout<<"addition is "<<a+b+c<<endl;
    }

};
int main()
{

Addition a1(2,4);
Addition a2(2,4,6);
Addition a3(2.5,2.5);
Addition a4(2.5,2.5,2.5);
return 0;
}
