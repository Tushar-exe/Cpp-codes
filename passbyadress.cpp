#include<iostream>
using namespace std;
void swap(int*,int*);
int main()
{
int a,b;
cout<<"Enter values ";
cin>>a>>b;
cout<<" values of a and b before swap:"<<a<<b<<endl;
swap(&a,&b);
cout<<"values of a and b after swap:"<<a<<b<<endl;	
}

void swap(int*p,int*q)
{
	int temp;
	temp=*p;
	*p=*q;
	*q=temp;
	cout<<"values of p and q after swap:"<<*p<<*q<<endl;
}
