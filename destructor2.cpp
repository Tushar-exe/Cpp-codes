#include<iostream>
using namespace std;
#include<string.h>
class string1{
    int len;
    char* ptr;
    public:
        string1(char* sptr){
            len=strlen(sptr);
            ptr=new char[len+1];
            strcpy(ptr,sptr);
        }
        void display(){
            cout<<"length is:"<<len<<endl;
            cout<<"String is:"<<ptr<<endl;
        }
        ~string1(){
            cout<<"destructor is called"<<endl;
            if(ptr)
            delete[] ptr;
            ptr=NULL;
        }
        string1(string1 &c){
            len=c.len;
            ptr=new char[len+1];
            strcpy(ptr,c.ptr);
        }
};
int main(){
    string1 c2("rahul");
    c2.display();
    {
        string1 c3(c2);
        c3.display();
        c3.~string1();
//        c3.display();
    }
    c2.display();
    
    }
