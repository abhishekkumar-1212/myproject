#include<iostream>
using namespace std;

int max(int arr[],int n){

int max1=arr[0];
int max2=arr[0];
for(int i=1;i<n;i++){
if(arr[i]>=max1){
    
    max2=max1;
    max1=arr[i];
    
} 
else if(arr[i]>max2){
    max2=arr[i];
}



}
 return max2;    
}


int main(){
int arr[]={35,1,10,34,1};
int n= sizeof(arr)/sizeof(arr[0]);
cout<<max(arr,n);
return 0;
}