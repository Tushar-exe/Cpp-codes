#include<iostream>
using namespace std;
int main(){
    int num,ornum,rem,res=0;
    cout<<"Enter the number:";
    cin>>num;
    ornum=num;
    while(num!=0){
        rem=num%10;
    
        num=num/10;
            res=res+(rem*rem*rem);
    }
    if(ornum==res){
        cout<<"amstrong";
    }
    else
    cout<<"not";
}
