#include <iostream>
using namespace std;
class Bank
{private:
	int AccNum;   //customer acc number
 	string Name; //name of customer
	string Nname; //nomine name
public:
	  void OpenAcc()
	{
		cout<<"Enter the necessary details to open your acc"<<endl;
		cout<<"Account Number: "<<AccNum<<endl;
		cout<<"Name: "<<Name<<endl<<"Nomine Name: "<<Nname<<endl;
	}
Bank(string name,int num,string nominee)
{
	Name = name;
	AccNum = num;
	Nname = nominee;
}
	
};
int main()
{
	Bank bank1 = Bank("sailesh",441,"sai");
	bank1.OpenAcc();
return 0;
}

