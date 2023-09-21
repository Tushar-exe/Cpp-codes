#include<iostream>
using namespace std;

class A{
    public :
        A(){
            cout<<"A default constructor called"<<endl;
        }
        void show(){
            cout<<"A display";
        }
};
class B:public A{
      public :
        B(){
            cout<<"B default constructor called"<<endl;
        }
        void show(){
            cout<<"B display";
        }
};

int main(){
    B Bobj;
    Bobj.show();
}
