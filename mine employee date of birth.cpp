#include <iostream>
#include <conio.h>
using namespace std;
struct DOB
{
	int day,month,year;
    int	getday()
	{return day;}
    int getmonth()
	{return month;}
	int getyear()
	{return year;}
public:
	void set(int d, int m,int y)
	{
		day = d;
		month = m;
	    year = y;
	}
};
class employee
{
	int id;
	string name;
	DOB db;
public:
	int data()
		{
			int d,m,y;
			cout<<"Enter id:"<<endl;cin>>id;
            cout<<"Enter name:"<<endl;cin>>name;
            cout<<"Enter DOB"<<endl;
            cout<<"Day:" ;cin>>d;
            cout<<"Month:" ;cin>>m;
            cout<<"Year:" ;cin>>y;
			db.set(d,m,y);
		}
		DOB birthdate(){return db;}
	bool samebirth(employee e)
		{
			if(db.getmonth() && db.getyear() == e.birthdate().getmonth() && e.birthdate().getyear())
		{	return true; }	
		else return false;
	    }
};
int main()
{
	employee e1,e2;
	e1.data();
	e2.data();
	bool r = e1.samebirth(e2);
	if(r==true)
		{
			cout<<"Born on same month and year"<<endl;
		}
	else cout<<"NO same"<<endl;
return 0;
}

