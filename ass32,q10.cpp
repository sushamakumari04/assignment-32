/*10. Create a C++ class for player objects with the following attributes: player no., name,
number of matches and number of goals done in each match. The number of
matches varies for each player. Write a parameterized constructor which initializes
player no., name, number of subjects and creates an array for number of goals and
number of matches dynamically.*/
#include<iostream>
#include<cstring>
using namespace std;
class Player
{
protected:
    int player_no;
    char player_name[50];
    int number_of_matches;
    int *goal;
public:
       Player()
       {
        cout<<"Enter player no : "<<endl;
        cin>>player_no;
        cout<<"enter player name :"<<endl;
        cin>>player_name;
        cout<<"enter no.of matches"<<endl;
        cin>>number_of_matches;
        goal=new int[number_of_matches];
        for(int i=0;i<number_of_matches;i++)
        {
         cout<<"Enter number of goals in match "<<i+1<<endl;
         cin>>goal[i];
        }
       }
        void display()
        {
         cout<<"-----------------------------"<<endl;
         cout<<"Player number  : "<<player_no<<endl;
         cout<<"player name    : "<<player_name<<endl;
         cout<<"number of matches : "<<number_of_matches<<endl;
         for(int i=0;i<number_of_matches;i++)
         {
          cout<<" match "<<i+1<<" goals : "<<goal[i]<<endl;
         }
        }
};

 int main()
 {
 Player p1;
 p1.display();
 return 0;
 }
