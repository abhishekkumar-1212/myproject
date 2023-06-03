// output={1,1,2,1};
// input ={2};   ALL the element came 3 times and one came once   
// Time complexity O(n)
#include<iostream>
using namespace std;
int main(){

int arr[]={1,1,2,1};
int n=sizeof(arr)/sizeof(arr[0]);

int ones=0;
int twoes=0;
for(int i=0;i<n;i++){
    ones=(ones^arr[i]) & ~twoes;  // 
    twoes=(twoes^arr[i])& ~ones;
}
cout<<ones;
return 0;
}