#include<iostream>
using namespace std;

class date{
    int dd,mm,yy;
    public:
        void show();
        date(int,int,int);
        date(date&);
};
date::date(int d,int m,int y){
    dd=d;
    mm=m;
    yy=y;
}
void date :: show(){
    cout<<dd<<"/"<<mm<<"/"<<yy<<endl;
}
date::date(date &t){
    dd=t.dd;
    mm=t.mm;
    yy=18;
}
int main(){
    date d(8,3,56);
    date d1(d);
    d1.show();
    d.show();
    
}
