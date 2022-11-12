//8. Write a C++ program to find the factorial of a number using copy constructor
#include<iostream>
using namespace std;
class factorial
{
private:
    int A,temp=1;
public:
    factorial(int n)
    {
      A=n;
     while(A>0)
     {
       temp=A*temp;
       A--;
     }
    }
    factorial(factorial &n)
    {
       temp=n.temp;
    }

    void show()
    {
     cout<<temp<<endl;
    }


};
int main()
{
factorial f1(5);
factorial f2=f1;
f1.show();
f2.show();

return 0;
}
