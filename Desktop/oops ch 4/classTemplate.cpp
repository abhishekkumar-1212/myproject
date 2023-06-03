#include<iostream>
using namespace std;

template<class T>
class A{

T a,b;
public:
A(T p,T q){  // Here i make parameterised constructor 
a=p;
b=q;
}
void showData(){
    cout<<"THE VALUE OF A "<<a<<"THE VALUE OF B"<<b;

}

};

int main(){


A<char>obj(d,f);
obj.showData();

return 0;


}