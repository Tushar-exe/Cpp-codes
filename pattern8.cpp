#include<iostream>
using namespace std;
int main(){
    int row,n,col;
    char ch='A';
    cin>>n;
    for( row=n;row>=1;row--)
    {
        for(col=1;col<=row;col++){
            cout<<ch;
        }
        ch++;
        cout<<endl;
    }
}
