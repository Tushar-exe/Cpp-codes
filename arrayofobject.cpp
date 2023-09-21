#include<iostream>
using namespace std;
class employee{
	int id;
	char name[30];
	double sal;
	public:
	void getdata(){
		cout<<"id:"<<endl;
		cin>>id;
		cout<<"name:"<<endl;
		cin>>name;
		cout<<"sal:"<<endl;
		cin>>sal;
	}
	void putdata(){
		cout<<id<<"\t"<<name<<"\t"<<sal<<endl;
		
	}
	
};
int main(){
	employee emp[5];
	int i,n;
	cout<<"Enter number of employees:"<<endl;
	cin>>n;
	for(i=0;i<n;i++)
		emp[i].getdata();
			for(i=0;i<n;i++)
		emp[i].putdata();
		
	
	
}
