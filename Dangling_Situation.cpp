#include<iostream>
using namespace std;
#include<string.h>

class Demo
{
    int len;
    char*ptr;
    public:

    void show()
    {
        cout<<"the length is:"<<len<<endl;
        cout<<"the string is:"<<ptr<<endl;

    }
    Demo(char*);
    ~Demo();


};

Demo::Demo(char*ptr1)
{
    len=strlen(ptr1);
    ptr=new char[len+1];
    strcpy(ptr,ptr1);
}

Demo::~Demo()
{
    cout<<"Destructor is called"<<endl;
    if(ptr!=NULL)
    {
        delete ptr;
        ptr=NULL;
    }
}

int main()
{

    Demo d1("Tushar");
    d1.show();
    {
      Demo d2(d1);
      d2.show();
      //d2.~Demo();
     }
d1.show();
}
