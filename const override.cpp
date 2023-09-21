#include<iostream>
using namespace std;
class demo{
    public:
     void show()const{
        cout<<"bye";
    }
    void show(){
        cout<<"hi";
    }
    
};
int main(){
    const demo c1;
    c1.show();
    
}
