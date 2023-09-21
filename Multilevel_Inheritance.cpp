#include<iostream>
using namespace std;

class Employee
{
    int id;
    public:
        Employee();
        Employee(int);
        void display();
        int find_Sal();

};

Employee::Employee()
{
    cout<<"in default of Emp"<<endl;
    id=0;
}

Employee::Employee(int i)
{
    cout<<"In para of Emp"<<endl;
    id=i;
}

void Employee::display()
 {
     cout<<"Id of Employee is:"<<id<<endl;

 }

int Employee::find_Sal()
        {
            return 0;
        }

class wageEmp:public Employee
{
    int hrs;
    int rate;
public:
    wageEmp()
    {
        cout<<"in default of wageEMP"<<endl;
        hrs=0;
        rate=0;
    }

    wageEmp(int,int,int);

    void display()
    {
        Employee::display();
        cout<<"no of working hours of emp is:"<<" ";
        cout<<hrs<<endl;
        cout<<"rate of doing the work is:"<<" ";
        cout<<rate<<endl;
    }

    int find_Sal();

};

wageEmp::wageEmp(int i,int h,int r):Employee(i)
{
    cout<<"inside para of wageEmp"<<endl;
    hrs=h;
    rate=r;
}

int wageEmp::find_Sal()
{
    return hrs*rate;
}

class SalesManager:public wageEmp
{
    int sales;
    int comm;
public:

    SalesManager()
    {
        cout<<"inside default of salesManager"<<endl;
        sales=0;
        comm=0;
    }

    SalesManager(int,int,int,int,int);

    void display()
    {
        wageEmp::display();
        cout<<"sales are:"<<sales<<endl;
        cout<<"comm are:"<<comm<<endl;
    }

    int find_Sal();
};



SalesManager::SalesManager(int i,int h,int r,int s,int c ):wageEmp(i,h,r)
{
    cout<<"under Salesmanager para"<<endl;
    sales=s;
    comm=c;
}



int SalesManager::find_Sal()
{
    return((wageEmp::find_Sal())+sales*comm);
}





int main()
{

    SalesManager *sm=new SalesManager(101,8,500,2000,10);
    sm->display();
    if(sm)
    delete sm;
    sm=NULL;
}
