#include<iostream>
using namespace std;

class Rectangle{
    float l,b;
    string name;
    public:
        float area(){return l*b;}

        void setlength(float k){l=k;}
        void setbreadth(float k){b=k;}
        void setname(string k){name=k;}
        void display(){
            cout<<"Name:"<<name<<endl;
            cout<<"length:"<<l<<"breadth"<<b<<endl;
            cout<<"Area:"<<area()<<endl;
         }
};
//end of class
int main(){
    Rectangle rects[5],max;
    int i;float l,b;
	string s; //string thyena float thyo s
    for(i=0;i<5;i++){
    cout<<"Enter length: ";
    cin>>l;
    cout<<"Enter breadth: ";
    cin>>b;
    cout<<"Enter name: ";
    cin>>s;
    rects[i].setlength(l);
    rects[i].setbreadth(b);
    rects[i].setname(s);
    }
    max=rects[0];
    for(i=1;i<5;i++){
       if(max.area()<rects[i].area()){  //area matra thyo area() huna parxa
            max=rects[i];
    }
    cout<<"Rectangle with Largest Area : "<<endl;
    max.display();
}
}

