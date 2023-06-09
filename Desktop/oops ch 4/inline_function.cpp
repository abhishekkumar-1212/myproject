#include<iostream>
using namespace std;

inline int func(int a,int b){
    return (a>b)?a:b;  // This is single line instruction .
}


int  main(){

cout<<"Maximum"<<func(10,40);

}