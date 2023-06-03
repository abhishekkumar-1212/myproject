#include<iostream>
using namespace std;

class A{

int a;
static int b;
public:
// BY making the constructor
A(int x,int y){
    a=x;
    b=y;
}
void show(){
    cout<<a<<b<<endl;
}
static void display(){
    cout<<b;  // a is not accessible because we use static member function

}

 int  A::b=0 ; // here i initialised my data memberr from zero 

}
;
int main(){
A obj(100,45),obj2(120,124);
obj.show();
A::display();
obj2.show();

}


