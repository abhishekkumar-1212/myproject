#include<iostream>
using namespace std;

// Find the unique element in the array Where all the element is repeated  twice in the array 
int main(){

int arr[]={89,3,4,3,4,6};


int size=6;
for(int i=0;i<size;i++){
    for(int j=i+1;j<size;j++){
        if(arr[i]==arr[j]){
        arr[i]=arr[j]=-1;
        }
    }

}
 for(int i=0;i<size;i++){
    if(arr[i]>0){
        int unique=arr[i];
        cout<<unique<<endl;
    }
 }

return 0;
}