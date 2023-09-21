#include<iostream>
using namespace std;
#include<math.h>

int main(){
  
    double rate,time;
    int principal;
    cout<<"enter the value\n";
    cin>>principal;
    cout<<"enter the interest"<<endl;
     cin>>rate;
     cout<<"enter the time\n";
     cin>>time;
    
     
     double Amount = principal * 
                  ((pow((1 + rate / 100), 
                    time)));
  double ci = Amount - principal;
  cout<<ci<<endl;
  cout<<Amount;
   
    
    
}
