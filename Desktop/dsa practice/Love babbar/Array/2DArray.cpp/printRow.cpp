#include<iostream>
using namespace std;
int main(){
  // Here I print 2D array Row wise 
int arr[3][3]={
    {1,2,3},
    {4,5,6},
    {7,9,5}};
int n= sizeof(arr)/sizeof(arr[0]);
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
     
       
    cout<<arr[i][j];
    }
cout<<endl;
}

for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
     
       // Now here print coloumn wise
    cout<<arr[j][i];
    }
    
cout<<endl;
}

}