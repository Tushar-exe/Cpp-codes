#include<iostream>
using namespace std;
#include<string.h>
class string1{
    
    int len;
    char* ptr;
    public:
        string1(char *);
        void show();
        string1(char,int);
        string1(int);
        string1();
        
};
string1::string1(char* ptr1){
    
    len = strlen(ptr1);
    ptr = new char [len+1];
    strcpy(this->ptr,ptr1);
    
}
void string1::show(){
    cout<<"length is" <<len<<"\t"<< "string "<<ptr<<endl;
}
string1::string1(char ch,int len)
{
    int i;
    this->len=len;
    ptr = new char[this->len+1];
    for(i=0;i<this->len;i++){
        ptr[i]=ch;
        cout<<ptr[i];
    }
    ptr[i]='\0';
}
string1::string1(int len){
    this->len=len;
    ptr=new char[this->len+1];
    char ch[this->len];
    cout<<"Enter String:";
    cin>>ch;
    strcpy(ptr,ch);
}
string1::string1(){
    int len;
    cout<<"enter the length\n";
    cin>>len;
    char str[len+1];
    this->len = len;
    ptr = new char[this->len+1];
    cout<<"enter the string";
    cin>>str;
    strcpy(ptr,str);
    
}
int main(){
    string1 s1("cdac");
    s1.show();
    string1 s2('*',50);
    string1 s3(5);
    s3.show();
    string1 s4;
    s4.show();
}

