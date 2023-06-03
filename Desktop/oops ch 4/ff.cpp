#include<iostream>
using namespace std;

 // Here addition of two complex number by using friend function

 class Complex {
  int a,b;
  public :
  void setNumber(int n1,int n2){
    a=n1;
    b=n2;

  }
  friend Complex sumComplex(Complex o1,Complex o2);
void putNumber(){
cout<<"GIVEN COMPLEX NUMBER "<<a<<"+""i"<<b<<endl;
}

 }; 
Complex sumComplex(Complex o1,Complex o2){
    Complex o3;
    o3.setNumber((o1.a+o2.a),(o1.b+o2.b));
    return o3;
}



int main(){

Complex c1,c2,sum;
c1.setNumber(198,3);
c1.putNumber();
c2.setNumber(100,56);
c2.putNumber();
sum=sumComplex(c1,c2);
sum.putNumber();
return 1;


}