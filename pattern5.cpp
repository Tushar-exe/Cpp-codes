#include<iostream>
using namespace std;
int main(){
    int row,n,col;
    cin>>n;
    for( row=n;row>=1;row--)
    {
        for(col=row;col>=1;col--){
            cout<<"*\t";
        }
        cout<<endl;
    }
}
