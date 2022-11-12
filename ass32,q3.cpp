/*3. Define a base class Animals having member function sound() . Define another
derived class from Animals class named Dogs. You need to override the sound
function of the base class in the derived class.*/
#include<iostream>
using namespace std;

class Animals
{
public:
    void sounds()// base class ka sound function kabhi chal hi nhi payega due to over riding of child sound function .
    {
     cout<<"Animals sounds"<<endl;
    }
};
class Dogs:public Animals
{
public:
    void Sounds()// function name in child and parent class is same having same parameter as argument
    // but different content in inside function of base and child sound function so its over riding.
    {
     cout<<"dog sounds"<<endl;
    }
};
int main()
{
Dogs d1;
d1.Sounds();

return 0;
}
