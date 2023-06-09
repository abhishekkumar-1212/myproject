#include<iostream>
using namespace std;
// Addition of two number by using friend function
class B;
class A{

private:
int data;
int age;
public:
// By make the function to set the value 
void setData(int value){
data=value;
}
friend void add(A,B);
};

class B{

private:
int data;
int age;
public:
// By make the function to set the value 
void setData(int value){
data=value;
}
friend void add(A,B);
};

void add(A o1, B o2){
cout<<"THE SUM OF GIVEN "<<o1.data+o2.data<<endl;
}
int main(){
    A a;
    a.setData(7);
    B b;
    b.setData(9);

    add(a,b); 
}