#include<iostream>
using namespace std;

class A{
    public:
void bless(){
    cout<<"BLESSING OF BABA G "<<endl;
}

};
class B:public A{

};
class D{

public:
int age ;
public:
void People(){
    cout<<"PEOPLE IS WALKING "<<endl;
}
};

class C:public A,public D{};

int main(){
C c1;
c1.People();
c1.bless();

return 0;
}