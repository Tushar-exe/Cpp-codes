

 /*
 #include<iostream>
 using namespace std;

 class Demo
 {
     int a;
     public:
     Demo()
     {
         a=5;

     }

     int show(Demo &D)
     {
         this->a=this->a+D.a;
         return this->a;
     }

 };


 int main()
 {
     Demo D1;
     Demo D2;
     cout<<D1.show(D2);
 }

 */



 #include<iostream>
 using namespace std;

 class Temp
 {
     int a;
    public:

        Temp()
        {

        }

        void get();
        Temp add(Temp &T)
        {
            Temp obj;
            obj.a=this->a+T.a;
            return obj;

        }

        void show()
        {
            cout<<"value is:"<<a;
        }
 };

 void Temp::get()
 {
     cin>>this->a;
 }


 int main()
 {
     Temp T1,T2;
     T1.get();
     T2.get();
     Temp T4=T1.add(T2);
     T4.show();
 }
