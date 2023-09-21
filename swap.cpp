#include<iostream>
using namespace std;
int main(){
    int a,b,temp;
    cout<<"enter first num";
    cin>>a;
    cout<<"enter the second num";
    cin>>b;
    cout<<"before swap"<<a<<" "<<b;
    temp=a;
    a=b;
    b=temp;
      cout<<"after swap";
    cout<<a<<" "<<b;
}
