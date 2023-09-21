#include <iostream>
using namespace std;
int ustrlen(char*);
int main(){
	int len;
	char a[10];
	cout<<"Accept the String:"<<endl;
	cin>>a;
	len=ustrlen(a);
	cout<<"Length of string:"<<len<<endl;
}
int ustrlen(char*b){
		int l=0;
	 	while(*b!='\0'){
	 		l++;
	 		b++;
		}
		return l;
	 		
}

	

