#include<iostream>
using namespace std;

int add(int a,int b){
    int sum=a+b;
    return sum;
}
float add( float a,float b){
    float sum=a+b;
    return sum;
}
double add(double a,double b){
    double sum=a+b;
    return sum;
}
int main(){

     cout<<add(2,3)<<endl;
     cout<<add(3.4,5.6)<<endl;
     cout<<add(1.3334255,1.3564);
     return 0;


}