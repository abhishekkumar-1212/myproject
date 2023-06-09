#include<iostream>
using namespace std;

class Cow{

public:
int age;
int weight;

public:
void sleep(){
    cout<<"Cow is sleeping "<<endl;
}


};

class Dog{


};

class Animal:public Cow, public Dog{



};



int main(){

Animal A1;
A1.sleep();

cout<<A1.weight<<endl;


}