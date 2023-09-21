#include<iostream>
using namespace std;
void swap (int&, int&);
int main()

{
	int a,b;
	cout<<"Enter values";
	cin>>a>>b;
	cout<<"values before swappng:"<<a<<b<<endl;
	swap(a,b);
    cout<<"after swapping values of a and b"<<a<<b<<endl;
    
}
void swap(int&p,int&q)
{
	int temp;
	temp=p;
	p=q;
	q=temp;
	cout<<"after swapping values p and q"<<p<<q;
}

