#include<iostream>
using namespace std;




int main(){

int arr[]={1,32,54,8,99,89,77};
int size=sizeof(arr)/sizeof(arr[0]);


int large=arr[0];
for(int i=0;i<size;i++){
if(large<arr[i]){
    large=arr[i];  // Upto change when it is small the arr[i].Basically element in the array
}
}
cout<<large<<endl;
return 0;


}