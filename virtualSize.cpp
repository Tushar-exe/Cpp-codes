#include<iostream>
using namespace std;

class base 
{
	int* a;
	public :
		base()
		{
			cout<<"default\n";
		}
		
	  virtual void display()
		{
			cout<<"display\n";
		}
};
int main(){
//	base *ptr ;
	base b;
//	ptr =&b;
//	ptr->display();
	cout<<sizeof(base);
}
