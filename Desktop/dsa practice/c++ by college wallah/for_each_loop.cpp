#include<iostream>
using namespace std;
int main(){
int arr[]={1,234,56,6454};
int size=sizeof(arr)/sizeof(arr[0]);
for(int element:arr){
    cout<<element<<endl;
}
}