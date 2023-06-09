#include<iostream>
using namespace std;
#include<limits.h>  // To get maximum and minimum value in the array
int  leader(int arr[],int n){

    int max=INT_MIN;
    for(int i=1;i<n;i++){
        if(arr[i]>max){
                 max=arr[i];
        }
    }
}
 



int main(){

int arr[]={10,22,12,3,0,6};
int n= sizeof(arr)/sizeof(arr[0]);

leader(arr,n);
for(int i=0;i<n;i++){
    cout<<arr[i];
}
                       

}
