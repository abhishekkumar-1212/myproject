#include<iostream>
using namespace std;
#include<limits.h>
#include<algorithm>

void transpose(int arr[2][3],int r,int c){
                 for(int i=0;i<r;i++){
                    for(int j=0;j<c;j++){
                       swap(arr[i][j],arr[j][i]); 
                    }
                 }
}


int main(){


int arr[2][3]={{2,3,6},{5,6,7}};
int r=2;
int c=3;

cout<<"MATRIX AFTER TRANSPOSE "<< transpose<<endl;
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        cout<<arr[i][j];
    }cout<<endl;
}
}


