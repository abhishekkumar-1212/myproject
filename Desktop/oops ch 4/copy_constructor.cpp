#include<iostream>
using namespace std;

// By creating the copy constructor 
class demo{

int a;
public:
demo(){
    a=10; // Here i initialised the value of a 

}
demo(demo &z){
    a=z.a; // Copy constructor make 
}
void putData(){
    cout<<"THE VALUE OF A"<<a;
}
};
int main(){

demo aa;
demo bb(aa);
aa.putData();
bb.putData();
return 0;

}