#include<iostream>
using namespace std;
#include<string.h>

class Demo
{
    int roll_No;
    char name[10];
    double fees;

    public:

    Demo(int,char*,double);
    Demo(Demo&);
    void show()
{
    cout<<"the rollno is"<<roll_No<<endl;
    cout<<"the name is:"<<name<<endl;
    cout<<"fees is:"<<fees<<endl;
}
};

Demo::Demo(int roll_No,char*name,double fees)
{
    this->roll_No=roll_No;
    strcpy(this->name,name);
    this->fees=fees;

}

Demo::Demo(Demo&D)
{
    this->roll_No=D.roll_No   ;
    strcpy(name,D.name);
    this->fees=105000;

}



int main()
{
    Demo d(25,"Sejal",94400.00);
    d.show();
    Demo d2(d);
    d2.show();



}
