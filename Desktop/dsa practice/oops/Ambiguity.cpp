#include<iostream>
using namespace std;
  // Ambiguity take place because two diferent class have same function 
class A{
public:

void func(){
    cout<<"I am the A"<<endl;
}

};

class B{
public:

void func(){
    cout<<"I am the B"<<endl;
}


};

class C: public A, public B {};

int main(){
C obj;
obj.A::func();

return 0;}









