#include<iostream>
using namespace std;
// Here i do hierracial inheritance
   class A{
     
     public:
     void func1(){
        cout<<"Function 1 is calling"<<endl;
     }

   };
class B:public A{
    public:
     void func2(){
        cout<<"Function 2 is calling"<<endl;
     }
};

class C:public A{
    public:
     void func3(){
        cout<<"Function 3 is calling"<<endl;
     }
};


int main(){

B object1;
object1.func1();

C object2;
object2.func1();


}