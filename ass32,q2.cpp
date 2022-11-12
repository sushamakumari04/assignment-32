//2. Define a class Rectangle and overload area function for different types of data type.
#include<iostream>
using namespace std;
class Rectangle
{
private:
      float ar;
public:
    Rectangle()
    {ar=0;}
    int Area(int A,int B)
    {
      return A*B;
    }
    double Area(double A,double B)
    {
      return A*B;
    }
    void Area(int A,double B)
    {
      ar=A*B;
    }
    void display()
    {
     cout<<ar<<endl;
    }

};
int main()
{
Rectangle r1,r2,r3;
//cout<<"area of rectangle"<<r1.Area(2.0,3.0)<<endl;
//cout<<"area of rectangle"<<r2.Area(1,2)<<endl;
r3.Area(4,2.2);
r3.display();
return 0;
}
