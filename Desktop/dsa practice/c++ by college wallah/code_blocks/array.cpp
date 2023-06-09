#include<iostream>
using namespace std;
int main(){

int arr[6];
int n;
cout<<"PLEASE ENTER THE VALUE SIZE "<<endl;
cin>>n;
  
cout<<arr[0]<<endl;

for(int i=0;i<n;i++){
   //arr[i]=i+1;   basically i defind my arr[i] here 
   cin>>arr[i];
}
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";    // Here I print my defined array
}

}