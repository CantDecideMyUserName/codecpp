#include <iostream>
using namespace std;
class Bank
{private:
	int AccNum;   //customer acc number
 	string Name; //name of customer
	string Nname; //nomine name
public:  //making public ,code below here are public
	  void OpenAcc()  //function for opening acc
	{
		cout<<"Enter the necessary details to open your acc"<<endl;
		cout<<"Account Number: "<<AccNum<<endl;
		cout<<"Name: "<<Name<<endl<<"Nomine Name: "<<Nname<<endl;
	}
     Bank(string name,int num,string nominee)  //constructor made
    {
	Name = name; //value assigned
	AccNum = num;
	Nname = nominee;
    }
    void setName(string name) //using setter to get name
    {
    	Name = name;
	}
	string getName()          //using getter to return name
	{
		return Name;
	}
	void setNominee(string nominee)
	{
		Nname =nominee;
	}
	string getNominee()
	{
		return Nname;
	}
	void setAcc(int num)
	{
		AccNum = num;
		cin>>AccNum;   //values can be changed in setter only,I think..
	}
	int getAcc()
	{
		return AccNum;
	}
};
int main()
{
   	Bank bank1 = Bank("sailesh",441,"sai");//value given
	//Trying to take input
	//need to use setter and getter
	bank1.setAcc();
	bank1.OpenAcc();
return 0;
}
