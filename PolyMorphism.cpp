#include <iostream>
using namespace std;
class absBank  //abstraction class
{
	virtual void AskForLoan() = 0; //making pure virtual class
	
};

class Bank : absBank
{protected:
	int age;
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
	void setAge(int number)
	{
		age= number;
		cin>>age;   //values can be changed in setter only,I think..
	}
	int getAge()
	{
		return age;
	}
	void AskForLoan() //making abstraction for Askforloan function 
	{
		if(age>=18)
		{
			cout<<"You can get loans"<<endl;
		}
	     else cout<<"You cannot get loans"<<endl;
	}
	//using polymorphism from here
virtual	void Working()
	{
		cout<<Name<<" is coding for "<<AccNum<<" dollars/hrs"<<" with his partner "<<Nname<<endl;
	}
};
//Inheritance starts from here
class Branch : public Bank
{
public:
		string office;
	Branch(string name,int num,string nominee,string Office)
		:Bank(name,num,nominee)
		{
			office = Office;
		}
	void Work()
	     {
	     	cout<<getName()<<" is crediting "<<getAcc()<<"k dollars"<<" with nominee "<<getNominee()<<" to "<<office<<endl;
	     	//here if the members of class Bank were private then the code below this comment wouldnt work
	     	//so protected lets us access the members from parents class to child class
	     //	cout<<Name<<" is crediting "<<AccNum<<"k dollars"<<" with nominee "<<Nname<<" to "<<office<<endl;
		 }
		void Working()
	//playmorphism:
	{
		cout<<Name<<" is making game for "<<AccNum<<" dollars/hrs"<<"with his partner"<<Nname<<endl;
	}
};
//next inheritance class
class SubBranch : public Bank
{
	public:
		string location;
		int value;
		SubBranch(string name,int num,string nominee,string Location,int Value)
		   	:Bank(name,num,nominee)
		   	{
		   		location = Location;
		   		value = Value;
			}
		void AccDetails()
		{
			cout<<Name<<" has "<<AccNum<<"k dollars "<<"with nominee "<<Nname<<" in "<<location<<" bank."<<endl;
		}
		void Working()
	//polymorphism:
	{
		cout<<Name<<" is streaming game for "<<value<<" dollars/hrs"<<"with his partner "<<Nname<<endl;
	}
};
int main()
{
/*	Bank bank1 = Bank("sailesh",441,"sai");//value given
	bank1.setAge(0);//Trying to take input
	bank1.OpenAcc();//need to use setter and getter
	bank1.AskForLoan();*/
	Branch A = Branch("Sailesh",400,"sai","Google"); //using Inheritanced class
	A.Work(); //accessing function inheritance
    SubBranch B = SubBranch("Sailesh",400,"sai","nepal",100);
	B.AccDetails();
	Bank *bank1 = &A;
	Bank *bank2 = &B;
	bank1->Working();
	bank2->Working();
	return 0;
}
