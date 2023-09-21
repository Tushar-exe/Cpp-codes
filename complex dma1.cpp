#include<iostream>
using namespace std;
class complex{
    int real,img;
    public:
        void get(){
            cout<<"Enter real and img\n";
            cin>>real>>img;
        }
        void put(){
            cout<<"Comlex no is:";
             cout<<real<<"+"<<img<<"i"<<endl;
        }
    
};
int main(){
    int n,i;
    cout<<"Accept no of obj:";
    cin>>n;
    complex* ptr=new complex[n];
    for(i=0;i<=n;i++){
        ptr[i].get();
    }
    for(i=0;i<=n;i++){
        ptr[i].put();
    }
}
