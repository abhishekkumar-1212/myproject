#include<iostream>
#include<bits/stdc++.h>
// Left Rotate the array  Kth time where user input 
using namespace std;

void left(int arr ,int n,int k ){  // Here i stored the elements in temp[] arr 
// AND THEse position is empty . Now store empty position our next elements 
   int k=k%n;      
   int temp[k];
    for(int i=0;i<k;i++){   // Step 1st
   int temp[i]={k};  // Basically we store at  4Th index 
                        // Let k=3 ;        
    }
    for(int i=k;i<n;i++){
        arr[i-k]=arr[i];
    }

// PUSH back the value of temporary 
int j=0;
int (int i=n-k;i<n;i++){
    arr[i]=temp[j];
    j++;   // By using two pointer approach.
}

}


int main(){

int arr[]={1,2,3,4,5,6,7};
int n= sizeof(arr)/sizeof(arr[0]);
int k;
 k%n;
cout<<"ENter the value of K"<<endl;
cin>>k;

left(arr,n,k);
for(int i=0;i<n;i++){
    cout<<arr[i];
}
return 0;
}    






