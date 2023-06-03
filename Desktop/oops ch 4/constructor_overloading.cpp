#include<iostream>
using namespace std;
// Here i perform constructor overloading 
            class demo{
          int a;
          public:
          demo(){
            a=10; // here i initialised by default constructor by 10; or take any number

          }
          demo(int x){  // here i take parameterised constructor
          a=x;

          }
          demo(demo &z){
            a=z.a;

          }
          void putdata(){
            cout<<"\n VALUE "<<a;
          }




            };


int main(){
        demo aa;  // it is for default constructor 
        demo bb(20); // It is for paramerterised constructor 
        demo cc(aa);
        aa.putdata();
     bb.putdata();
    cc.putdata();
    return 0;
}