#include<iostream>
using namespace std;
void ucpy(char*,char *);
int main(){
	
char a[10],b[10];
cout<<"Enter the first string:"<<endl;
cin>>a;
ucpy(b,a);
cout<<"string copied is="<<b<<endl;


}
void ucpy(char* p,char* q)
{
	
	while(*q!='\0')
	{
		*p=*q;
		p++;
		q++;
	}
	*p='\0';
	
}
