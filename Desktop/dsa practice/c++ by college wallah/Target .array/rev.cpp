#include<iostream>
using namespace std;

int sort(int arr[],int n){
    int max=arr[0];
    int min=arr[0];
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }   
        if(min>arr[i]){
            min=arr[i];

        }
    }
        
return max * 10  + min;

}


int main(){

int arr[]={1,2,3,4,55};
int n= sizeof(arr)/sizeof(arr[0]);
cout<<sort(arr,n)<<"  "<<"     ";
return 0;



}