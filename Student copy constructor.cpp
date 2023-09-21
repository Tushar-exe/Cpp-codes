#include<iostream>
using namespace std;
#include<cstring>

class student{
    int roNo;
    char name[10];
    double fee;
    
    public:
        
        student(int r ,char* n, double f){
            roNo=r;
            strcpy(name,n);
            fee=f;
        }
        
        void show(){
            cout<<"name" <<name<<" "<<"roll no"<<roNo<<"fee"<<fee<<endl;
        }
        student(student &s){
              roNo=s.roNo;
            strcpy(name,s.name);
        }
};
int main(){
    student s(21,"purva",106200);
    student s1(s);
    s1.show();
    s.show();
}
