#include<iostream>
using namespace std;

class employee
{
    int id=0;
    public:
        employee(){
            cout<<"default EMPLOYEE";
            
        }
        employee(int i){
            id = i;
        }
        void display(){
            cout<<"id of employee"<<id<<endl;
        }
        
        virtual int findSalery(){
            return 0;
        }
};

class wadgeEmployee : public employee
{
    
    int hours;
    int rate;
    
    public:
        wadgeEmployee(){
            cout<<"default wadgeEmployee\n";
            hours = 0;
            rate =0;
        }
        
        wadgeEmployee(int i , int h , int r):employee(i)
        {
            hours = h;
            rate = r;
            
        }
       int findSalery()
       {
           return hours*rate;
       }
       
       void display()
       {
         employee::display();
         cout<<hours <<" "<<rate<<endl;    
   }
    
    
    
};

class salesManager : public wadgeEmployee
{
    int sale;
    int com;
    public :
        salesManager(){
            cout<<"default salesManager\n";
             sale = 0;
             com = 0;  
        }
        
        salesManager(int i , int h , int r , int s , int c):wadgeEmployee(i , h ,r)
        {
            sale = s;
            com = c;
        }
        
        int findSalery(){
            return wadgeEmployee::findSalery() + sale*com;
        }
        void display(){
            wadgeEmployee::display();
            cout<<"sales ="<< sale<<endl;
            cout<<"commision ="<< com<<endl;
        }
};
int main(){
	employee *ptr;
	employee e(1);
	ptr =& e;
	cout<<ptr ->findSalery()<<endl;
	
	wadgeEmployee we(1,10,12);
	ptr = &we;
	cout<<ptr ->findSalery()<<endl;
	
	salesManager sm(1,10,12,100,1000);
	ptr = &sm;
		cout<<ptr ->findSalery()<<endl;
		
		cout<<sizeof(employee);
}





