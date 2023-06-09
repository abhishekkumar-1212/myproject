#include<iostream>
using namespace std;
// Left rotate the array by one place .
  // TIME Complexity =O(n) and {space complexity O(1); Because there is  extra space}
void  sort(int arr[],int n){  // IN ORDER TO SOLVE PROBLEM by O(n).

int temp=arr[0];
for(int i=1;i<n;i++){
arr[i-1]=arr[i];
}
arr[n-1]=temp;

}





int main(){

int arr[]={1,2,3,4};
int n= sizeof(arr)/sizeof(arr[0]);
sort(arr,n);
for(int i=0;i<n;i++){
    cout<<arr[i];
}


}