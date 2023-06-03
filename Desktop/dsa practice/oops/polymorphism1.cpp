#include<iostream>
using namespace std;

class A{
    public:
    void sayHello(){
cout<<"Love babar "<<endl;
    }
    void sayHello(string name){
cout<<" Hello Love babar "<<name<<endl;
    }



};


int main(){

A obj;
obj.sayHello();

}