#include<iostream>
using namespace std;
int main(){
    int row,n,col,num=1;
    cin>>n;
    for( row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++){
            cout<<num;
            num++;
        }
        cout<<endl;
    }
}
