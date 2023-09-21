#include<iostream>
using namespace std;
class complex{
    int real,img;
    public:
        complex(){
            real=5;
            img=5;
        }
        complex(int r,int i){
            real=r;
            img=i;
        }
        void show(){
            cout<<real<<"+"<<img<<"i"<<endl;
        }
};
int main(){
    complex* ptr=new complex();
    ptr->show();
    complex* ptr1=new complex(10,20);
    ptr1->show();
    
}
