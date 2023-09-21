#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    do{
        cout<<"Enter the number: \n";
        cin>>n;
        sum=sum+n;
    }while(n!=0);
    cout<<"sum is "<<sum;
}
