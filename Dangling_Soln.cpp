#include<iostream>
using namespace std;
#include<string.h>

class Demo{

int len;
char*ptr=NULL;

public:

    void show()
    {
        cout<<"Length is:"<<len<<endl;
        cout<<"String is:"<<ptr<<endl;
    }
    Demo(char*);
    Demo(Demo&);

    ~ Demo();



};


Demo::Demo(char*sptr)
{

    len=strlen(sptr);
    ptr=new char[len+1];
    strcpy(ptr,sptr);
}

Demo::Demo(Demo&d)
{
    len=d.len;
    ptr=new char[this->len+1];
    strcpy(ptr,d.ptr);
}

Demo::~Demo()
{
    cout<<"Destructor is called"<<endl;
    if(ptr!=NULL)
        delete ptr;
        ptr=NULL;
}






int main()
{
   Demo D1("Tushar");
   D1.show();
   {
     Demo D2(D1);
     D2.show();
     D2.~Demo();
   }
   D1.show();


}
