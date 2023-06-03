
// Print N Exor of number 1 to N
#include<iostream>
using namespace std;

int max(int n){
 if(n%4==0)
return n;

if(n%4==1)
return 1;

if(n%4==2)
return n+1;

}



int main(){




int n;
cout<<"ENter the value of N "<<endl;
cin>>n;
cout<<max(n);

}