#include<iostream>
using namespace std;
class A{
    int c;
    public:int a;
    protected: int b;
    public:
    void display(){
        cout<<"In display of A\n";
    }
};
class B:public A{
    public:
        void show(){
            cout<<a<<b<<endl;
        }
};
class c:public B{
    public:
        void show(){
            cout<<a<<b<<endl;
        }
};
int main(){
    B bobj;
    bobj.show();
    bobj.display();
    c cobj;
    cobj.show();
}




