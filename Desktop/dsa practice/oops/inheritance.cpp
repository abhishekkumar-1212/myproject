#include<iostream>
using namespace std;
  // create the base class 
  class Human{

   public:
   int height ;
   int weight;
   int age;

   public:
   int getAge(){
    return this->age;
   }
   void setWeight(int w){
       this->weight=w;
   }


  };
// Here i inhertance take place 
class Male:public Human{

public:
string color;
void sleep(){

cout<<"Male is sleeping "<<endl;

}

};

int main(){
// class objcect of male class 
Male object1;
cout<<object1.age<<endl;
cout<<object1.weight<<endl;
cout<<object1.height<<endl;

}