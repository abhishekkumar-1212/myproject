#include<iostream>
using namespace std;

// Here i do single inheritance 
class Animal{

public:
int age;
int weight;

public:
void play()
{
cout<<"playing "<<endl;

}

};
    class dog:public Animal{
    public:
    int height;
    string color;

    };


int main(){

// Create an object of dog 
dog d1;
cout<<d1.weight<<endl;
cout<<d1.play<<endl;
return 0;


}



