#include<iostream>
using namespace std;
int main(){
    int i=1;
    int sum_o=0,sum_e=0;
    for(;i<=20;i++){
        if(i%2==0){
            sum_e=sum_e+i;
        }
        else{
            sum_o=sum_o+i;
        }
    }
    cout<<"sum of even"<<sum_e<<endl;
    cout<<"sum of odd"<<sum_o<<endl;
}
