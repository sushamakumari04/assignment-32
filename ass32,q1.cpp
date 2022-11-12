/*1. Create a class FLOAT that contains one float data member. Overload all the four
arithmetic operators so that they can operate on the objects of FLOAT.*/
#include<iostream>
using namespace std;

class FLOAT
{
private:
    float data;
public:
     FLOAT(){ data=0;}
     void setData(float t)
     {
      data=t;
     }
     FLOAT operator+(FLOAT f)
     {
       FLOAT temp;
       temp.data=data+f.data;
       return temp;
     }
     FLOAT operator-(FLOAT f)
     {
       FLOAT temp;
       temp.data=data-f.data;
       return temp;
     }
      FLOAT operator*(FLOAT f)
     {
       FLOAT temp;
       temp.data=data*f.data;
       return temp;
     }
      FLOAT operator/(FLOAT f)
     {
       FLOAT temp;
       temp.data=data/f.data;
       return temp;
     }
     void Display()
     {
      cout<<data<<endl;
     }
};
int main()
{
FLOAT f1,f2,f3,f4,f5,f6;
f1.setData(10.0);
f2.setData(5.0);
f3=f1+f2;
f3.Display();
f4=f1-f2;
f4.Display();
f5=f1*f2;
f5.Display();
f6=f1/f2;
f6.Display();
return 0;
}
