#include<iostream>
using namespace std;

class A 
{
    public:
    void show(){
        cout<<"int class A";
    }
};

class B
{
    public:
    void show(){
        cout<<"int class B";
    }
    
};
class C : public A,B
{
    
};

int main()
{
    C cobj;
    //cobj.show();
    cobj.A :: show();
}
