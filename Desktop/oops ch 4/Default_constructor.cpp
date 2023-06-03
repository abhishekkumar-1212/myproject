#include<iostream>
using namespace std;

class demo {

int a;
public:
demo(){
    a=10;  // Here i initialised the value of a 
}

void putData(){
    cout<<"The value of a  "<<a ;
}
};



int main(){
demo aa;
aa.putData();


}