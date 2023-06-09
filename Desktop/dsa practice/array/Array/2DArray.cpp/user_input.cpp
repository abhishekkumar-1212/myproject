#include<iostream>
using namespace std;
int main(){

 int arr[3][4];
 int n= sizeof(arr)/sizeof(arr[0]);
 cout<<"Enter the row and column ";
 for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>arr[i][j];
    }
    cout<<endl;
 }


}