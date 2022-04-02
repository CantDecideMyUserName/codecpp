/* 1) Create a class Employee With following member variables :
-id -name -DOB
Note : DOB is a structure with members : day , month , year.
 2) Provide following member functions to class Employee:
 -check if born on same month(Employee () that verifies if 2 emloyees are born on same month are not */
#include<iostream>
#include<conio.h>
using namespace std ;
struct DOB{
    int day , month ,year;
    int getday(){return day;
    }
    int getmonth(){return month;
    }
    int getyear(){return year;
    }
    void setdate(int d ,int m,int y){day=d ;month=m ;year=y;
    }
};
class Employee{
    int id;
    string name;
    DOB db;
    public :
        int setdata(){
            int d,m,y;
            cout<<"Enter id:"<<endl;cin>>id;
            cout<<"Enter name:"<<endl;cin>>name;
            cout<<"Enter DOB"<<endl;
            cout<<"Day:" ;cin>>d;
            cout<<"Month:" ;cin>>m;
            cout<<"Year:" ;cin>>y;
            db.setdate(d,m,y);
        }
       DOB getdataofbirth(){return db;
        }
        bool bornonsamemonth(Employee e){
            if(db.getmonth()==e.getdataofbirth().getmonth())
            return true;
            else 
            return false;
        }
};
int main(){
    Employee e1 ,e2;
    e1.setdata();
    e2.setdata();
    bool r=e1.bornonsamemonth(e2);
    if(r==true){cout<<"Born on Same month";
    }
    else{
        cout<<"Not Born on Same month";
    }
    getch();
}
