#include<iostream>
using namespace std;

template<class T>
void showData(T a, T b)
{
cout<<"Value of a "<<a<<"Value of b"<<b<<endl;

};

int main(){
int p=10,q=20;

float s=10.45,f=8.4;

showData(s,f);


}
