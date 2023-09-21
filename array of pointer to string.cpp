#include<iostream>
using namespace std;
int main()
{
char *names[5] = {"rohan","ram", "rahul","rohit","rachana"};
for (int i= 0;i<5;i++)
{
	int j=0;
	cout<<names[i]<<endl;
	cout<<(names +i)<<endl;
	cout<<*(names+i)<<endl;
    for	(;j<5;j++){
    	
	    cout<<*(*(names+i)+j);
	    
    }
    cout<<endl;
    cout<<*(*(names+2)+3);
}
}
