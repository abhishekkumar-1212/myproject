#include<iostream>
using namespace std;
int main(){
// Sum of an array
int arr[]={12,24,44};
int size =sizeof(arr)/sizeof(arr[0]);
int sum=0;
for(int i=0; i<size;i++){
    sum=sum+arr[i];
   
}
 
cout<<sum<<endl;

    return 0;
}