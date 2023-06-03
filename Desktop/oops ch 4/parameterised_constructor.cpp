#include<iostream>
using namespace std;

class demo{

int a,b;
public:
demo(int m,int n){
    a=m;
    b=n;
}
void putData(){
    cout<<"The value of a and b"<<a<<b;
}


};



int main(){
demo aa(23,45,78);
aa.putData();
return 0;


}