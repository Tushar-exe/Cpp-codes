#include<iostream>
using namespace std;
class A{
    public:
        void display(){
            cout<<"In display of a\n";
        }
};
class B:public A{
    
};
int main(){
    B bobj;
    bobj.display();
}
