#include<iostream>
using namespace std;
int main(){
    int stud,m1,m2,m3,m4,m5,sum=0;
    float avg;
    for(stud=0;stud<5;stud++){
        cout<<"Enter 5 marks:\n";
        cin>>m1>>m2>>m3>>m4>>m5;
        sum=m1+m2+m3+m4+m5;
        float avg=(float)sum/5;
        cout<<"Average of Student:"<<avg<<endl;
    }
    
}
