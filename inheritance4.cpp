#include<iostream>
using namespace std;
class A{
    int a;
    public:
        A(){
            cout<<"In default of A\n";
        }
        A(int p){
            cout<<"In para of A\n";
            a=p;
        }
        void display(){
            cout<<a<<endl;
        }
};
class B:public A{
    int b;
    public:
        B(){
            cout<<"In default of B\n";
        }
        B(int p,int q):A(p){
            cout<<"In para of B\n";
            b=q;
        }
        void display(){
            A::display();
            cout<<b<<endl;
        }
};
int main(){
    B bobj(10,20);
    bobj.display();
}
