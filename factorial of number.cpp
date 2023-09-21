#include<iostream>
using namespace std;
int main(){
    int num;
    int res=1;
    cout<<"enter the num";
    cin>>num;
    

while(num!=0){
    res =res*num;
    num--;
    
}
cout<<res;
}
