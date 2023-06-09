#include<iostream>
using namespace std;
int main(){
 /*int arr[]={1,4,56,6};
   cout<<sizeof(arr)<<endl;
cout<<sizeof(arr)/sizeof(arr[1])<<endl;*/

// Now traversing an array 
int arr[]={1,45,78,8};
int size= sizeof(arr)/sizeof(arr[0]);
for(int i=0;i<size;i++){
    cout<<arr[i]<<endl;
}



return 0;


}