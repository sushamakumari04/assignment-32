//9. Write a C++ program to calculate the area of triangle, rectangle and circle using
//constructor overloading. The program should be menu driven.
#include<iostream>
using namespace std;
class Area
{
public:
    Area(double base,double height)
    {
      cout<<"area of triangle is "<<0.5*base*height<<endl;
    }
    Area(int r)
    {
     cout<<"area of circle is "<<3.14*r*r<<endl;
    }
    Area(int length,int breadth)
    {
      cout<<"area of rectangle is "<<length*breadth<<endl;
    }
};
int main()
{
int n;
while(n!=4){
cout<<"1.area of triangle"<<endl;
cout<<"2.area of circle "<<endl;
cout<<"3.area of rectangle"<<endl;
cout<<"4. exit"<<endl;
cout<<"enter your choice"<<endl;
cin>>n;
system("cls");
switch(n)
{
case 1:
      {
        Area a1(2.0,3.0);
        break;
      }
case 2:{
        Area a2(1);
        break;
       }
case 3:{
      Area a3(2,3);
      break;
      }
}
}

return 0;
}
