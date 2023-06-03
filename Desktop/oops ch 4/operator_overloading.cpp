#include<iostream>
using namespace std;

class demo{
int a ;
public:
void getdata(){
    cout<<"ENTER THE NO."<<endl;
    cin>>a;
}
void putdata(){
    cout<<"VALUE"<<a<<endl;
}
// BY making the function for operator overloading 
demo operator+(demo bb){
    demo cc;
    cc.a=a+bb.a;
    return cc;
}


};

int main(){

demo aa,bb,cc;
aa.getdata();
bb.getdata();
cc=aa+bb;
aa.putdata();
bb.putdata();
cc.putdata();

}