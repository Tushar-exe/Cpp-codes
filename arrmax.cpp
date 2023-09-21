#include<iostream>
using namespace std;
int main()
{
	int size;
	cout<<"enter a size of array"<<endl;
	cin>>size;
	int a[size];
	for(int i=0; i<size;i++)
	{
		cin>>a[i];
	}
	int max=a[0];
	for(int i=1; i<size;i++)
	{	
	
		if(max<a[i])
		{
	max=a[i];
		}
	}
		cout<<max;
}
