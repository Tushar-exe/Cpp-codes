#include<iostream>
using namespace std;
void uconcat(char*, char*);
int main()
{
	char str1[10], str2[10];
	cout<<"Enter the first string="<<endl;
	cin>>str1;
	cout<<"Enter the second string"<<endl;
	cin>>str2;
	uconcat(str1,str2);
	cout<<str1<<endl;
	return 0;
}
void uconcat(char* a, char* b)
{
	while(*a!='\0')
	{
		a++;
	}
	while(*b!='\0')
	{
		*a=*b;
		a++;
		b++;
	}
	*b='\0';
}
