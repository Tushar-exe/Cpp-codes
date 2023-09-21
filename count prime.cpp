#include<iostream>
using namespace std;
int main(){
       int t = 0;
       int count=0;
    int num=50;
    for(int i=1;i<=num;i++){
        
     
        for(int j=2;j<i;j++){
            
            if(i%j==0){
                count++;
                break;
            }
        }
        if(count==0&& i!=1 )
        
            cout<<i<<endl;
            count=0;
        
        
    }
    
}
