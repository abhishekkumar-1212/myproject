#include<iostream>
using namespace std;
// I want to do operator overloading 
class A{

public:
void sayhello(){
    cout<<"WELCOME"<<endl;
}

void sayhello(string name ){
    cout<<"MY NAME "<<endl;
}
void sayhello(double a){
cout<<"SAY GURU"<<endl;
}

};




int main(){
A aa;
aa.sayhello();


}