#include<iostream>
using namespace std;
#include<limits.h>  // THis function used to take the minimum value compare 
int maxi(int arr [][3],int row ,int column){
                        int max =INT_MIN;
               for(int i=0;i<row;i++){
                for(int j=0;j<column;j++){
                    if(arr[i][j]>max){
                        max=arr[i][j];
                    }
                }
               }
               return max;
}


int main(){

int arr[3][3]={{123,543,34},{23,54,45},{3,1,2}}; // Here we make 3X3 2D array 

int row=3;
int column=3; 
cout<<maxi(arr,row ,column);

}    