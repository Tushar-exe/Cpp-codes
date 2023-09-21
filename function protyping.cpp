#include<iostream>
using namespace std;
void swap(int,int);
int main(){
	int a,b;
	cout<<"Enter the numbers:";
	cin>>a>>b;
	cout<<"Before swapping values of a and b"<<a<<b;
	swap(a,b);
	cout<<"After swapping values of a and b"<<a<<b;	
	
}
void swap(int p,int q){
	int temp;
	temp=p;
	p=q;
	q=temp;
	cout<<"After swapping values of p and q:"<<p<<q;
}
