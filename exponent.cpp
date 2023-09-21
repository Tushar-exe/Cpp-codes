#include<iostream>
using namespace std;
int main(){
    int b,e,p=1,i;
    cout<<"Enter base:\n";
    cin>>b;
    cout<<"Enter Exponent:\n";
    cin>>e;
    for(i=1;i<=e;i++){
        p=p*b;
        
    }
    cout<<"power="<<p;
}
