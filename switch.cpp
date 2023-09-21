#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    int odd;
    switch(n%2==0){
        case 0:
            
            cout<<"The number is even"<<endl;
            break;
        case 1:
            cout<<"The number is odd"<<endl;
            break;
        default:
            cout<<"wrong num";
    }
}
