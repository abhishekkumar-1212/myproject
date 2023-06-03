#include<iostream>
using namespace std;
int main(){

int row=3;
int column=3;  
 
 int arr[3][3]={{1,2,3},{3,4,5},{6,2,1}};
  int n=sizeof(arr)/sizeof(arr[0]);
for(int i=0;i<row;i++){
    
int sum=0;
    for(int j=0;j<column;j++){
        
        sum=sum+arr[i][j];

    }
    cout <<" "<<sum<<endl;
        
}       




}