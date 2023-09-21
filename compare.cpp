#include<iostream>
using namespace std;
#include<string.h>
int main()
{
	char str1[10], str2[20];
	int result;
	cout<<"Enter first string"<<endl;
	cin>>str1;
	cout<<"ENter second string"<<endl;
	cin>>str2;
	result= strcmp(str1,str2);
	cout<<result<<endl;
	if(result==0)
		cout<<"Equal"<<endl;
	else if(result==1)
		cout<<"First string is greater"<<endl;
	else
		cout<<"First string is smaller"<<endl;
	return 0;
	
}
