#include<iostream>
using namespace std;

int main(){
    int arr[5];
    int arr2[5];
    
    cout<<"enter the element in array"<<endl;
    for( int i = 0 ;i<5 ; i++){
        cin>>arr[i];
        arr2[i]=arr[i]; 
    }
    for(int j=0;j<5;j++){
//          cout<<arr[j]; 
          cout<<arr2[j];
    }
  
}
