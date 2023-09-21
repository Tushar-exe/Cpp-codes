#include<iostream>
using namespace std;
int main(){
    int row,n,col;
    char ch='A';
    cin>>n;
    for( row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++){
            cout<<ch;
        }
        ch++;
        cout<<endl;
    }
}
