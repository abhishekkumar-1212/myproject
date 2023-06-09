#include<iostream>
using namespace std;
   // Addition of two numbers by using friend class 
    class B;
    class A{
        int data;
        public:
        void setData(int value){
            data=value;
        }
        friend void add(A o1,B o2);
    };
 
 class B{
    int data;
        public:
        void setData(int value){
            data=value;
        }
    friend void add(A o1,B o2);

 };

void add (A o1,B o2){
  
    cout<<"ADDITION OF NUMBER IN CLASS A AND CLASS C"<<o1.data+o2.data;  // Here not the name of c
}





int main(){
A a;
a.setData(45);
B b;
b.setData(78);
add(a,b);
return 0;



}