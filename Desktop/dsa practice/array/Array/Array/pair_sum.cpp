#include<iostream>
using namespace std;
  void  pair_sum(int arr[],int n,int target){

   for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(arr[i]+arr[j]== target ){
   cout<< "("<<arr[i]<<" "<<","<<arr[j]<<" )"<<endl;
        }
    }
   }
   
   
   }
int main(){

    
      
      




int arr[]={1,2,3,4,5};
int n= 5;

int target;
cout<<"Enter the value of target "<<endl;
cin>>target;
pair_sum(arr,n,target);
return 0;

}