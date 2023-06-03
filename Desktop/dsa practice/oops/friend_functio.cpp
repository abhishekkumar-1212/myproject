#include<iostream>
using namespace std;
class Y;
class X{

private:
int data;
int age;
public:
void setData(int value){
    data=value;
}
friend void add (X,Y);
};

class Y{

private:
int num;
int age;
public:
void setData(int value){
    this->num;
}
friend void add(X,Y);
};

void add(X o1, Y o2){
    cout<<"Sum the data of both "<<o1.data+o2.num;
}


int main(){
X a;
a.setData(4);
Y b;
b.setData(8);
 // call By value
 add (a,b);
 return 0; 
}