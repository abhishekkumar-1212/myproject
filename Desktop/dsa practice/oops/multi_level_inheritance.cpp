#include<iostream>
using namespace std;

class Human{

public:
int age;
int weight;

public:
void sleep(){
    cout<<"ANimal is sleeping "<<endl;
}

};
class Dog:public Human{


};

class German_Shephered:public Dog{

};

int main(){

German_Shephered G;
G.sleep();
cout<<G.age<<endl;
return 0;

}