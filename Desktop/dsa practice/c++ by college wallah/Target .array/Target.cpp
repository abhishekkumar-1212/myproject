#include<iostream>
using namespace std;
int main(){

int arr[]={3,4,5,1,2};
int size=sizeof(arr)/sizeof(arr[0]);
int count=0;  // In count my answer is store .
int target=7;
for(int i=0;i<size;i++){
   for(int j=i+1;j<size;j++){
      if(arr[i]+arr[j]==target){
      count++;
      
      }
     
   }
   
}
cout<<count<<endl;


return 0;
}