#include<iostream>
using namespace std;
// progrm of exception handling 

int main(){

int i=3;
cout<<"WELCOME "<<endl;
try{

throw 10;
cout<<"\n IN try";

}
catch(int e)
{
    cout<<"\n Exception no."<<e<<endl;
}

}