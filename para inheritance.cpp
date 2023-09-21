#include<iostream>
using namespace std;

class A{
    int a;
    public :
        A(){
            cout<<"A default constructor called"<<endl;
        }
        A(int a){
             cout<<"A para constructor called"<<endl;
             this->a=a;
        }
        void show(){
            cout<<"A display";
            cout<<a<<endl;
        }
};
class B:public A{
    int b;
      public :
        B(){
            cout<<"B default constructor called"<<endl;
        }
        B(int b):A(10){
            A::show();
             cout<<"B para constructor called"<<endl;
             this->b=b;
        }
        void show(){
            
            cout<<"B display";
            cout<<b<<endl;
        }
};

int main(){
    B Bobj(20);
    Bobj.show();
}
