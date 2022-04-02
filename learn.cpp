#include <iostream>
#include<conio.h>
using namespace std;
class human
{
public:
static int id;
    int count;
    string name;
public:
    void setdata()
    {
        cout<<"Enter id and then name."<<endl;
    }
    void getdata()
    {
        cin>>id;
        cin>>name;
    }
 void display()
    {
        cout<<"Your name is "<<name<<" and your id is "<<id<<endl;
    }
};
human :: id = 10;
int main()
{
    human h1,h2,h3;
    h1.setdata();
    h1.getdata();
    //human::id = 10;
    h1.display();
    getch();
}

