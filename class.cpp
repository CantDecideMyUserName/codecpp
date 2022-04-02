#include <iostream> //header
using namespace std;//using namespace for cou, cin,endl etc
/*
you can do std::cout,cin,endl etc too
*/ 
class cool    // declearing class cool
{
public:      // making class public for using it in main
	float fire; //initilizing float
	string flame;//initilizing string
	bool fla;	//taking value either 1 or 0
	
cool(string s,float b,bool v) //parameterized constructor
	{
	flame = s; //giving value of flame to s
	fla = v; //giving value of fla = v
	fire = b; // giving value of fire
	}	
~cool()
    {
	cout<<"Destructor called"<<endl;
    }
cool(cool &a)
    {
	flame = a.flame;
	fire = a.fire;
	fla = a.fla;
    }
cool () //default constructor
    {
	cout<<"Called deafult constructor"<<endl; //calling default constructor
    }
void Info() //void function
    {
	cout<<"Name = "<<flame<<"\n"<<"Boolean = "<<fla<<"\n"<<"Float = "<<fire<<endl; //printing to console
    }
 
 bool operator == (cool&a)
 {
 	if(flame ==a.flame && fire ==a.fire &&fla == a.fla)
 	{
 	return true;	
	}
	return false;
 }
	
};
int main() //main function 
{
	cool a("sailesh",11,1); //initilizing class
	//cin>>a.fire>>a.flame>>a.fla;
//	a.Info();//calling info function
	cool b;
	cool c = a;
	c.Info();
	if (c==a)
	{
		cout<<"Same"<<endl;
	}
	else cout <<"Not Same"<<endl;
	//b.Info();
	//cout<<"Name = "<<s<<"\n"<<"Boolean = "<<v<<"\n"<<"Float = "<<b<<endl;
return 0;// end statement
}

