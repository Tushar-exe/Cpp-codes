#include<iostream>
using namespace std;
int main(){
    int m,n,sum=0;
    float avg;
    cout<<"Enter number of subjects:\n";
    cin>>m;
    cout<<"Enter no of characters:\n";
    cin>>n;
    int* marks_m=new int[m];
    char* name_n=new char[n];
    for(int i=0;i<m;i++){
        cin>>marks_m[i];
        sum=sum+marks_m[i];
        avg=(float)sum/m;
    }
    cout<<"Enter name of students:";
    cin>>name_n;
    cout<<"Name is "<<name_n;
    cout<<"avg is "<<avg;
    delete[] marks_m;
    delete[] name_n;
    return 0;
  
}
