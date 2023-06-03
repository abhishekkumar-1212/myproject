// Transpose of the matrix 
#include<iostream>
#include<algorithm>
using namespace std;
 void transpose(int arr[][3],int r,int c){
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                 swap(arr[i][j],arr[j][i]);
            }
        }    
 }

         
int main(){

int arr[3][3]={{1,2,3},{5,9,34},{2,4,6}};
int r=3;
int c=3;

transpose(arr,r,c);
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        cout<<arr[j][i]<<" ";
    }
    cout<<endl;
}
return 0;
}