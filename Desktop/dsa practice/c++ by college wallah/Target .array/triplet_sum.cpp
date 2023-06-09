#include<iostream>
using namespace std;
int main(){

// Find how many triplet in the array whose sum ==5;
int arr[]={3,1,2,4,0,6};
int size=6;
int targetsum=5;
int ans=0;  // Because I store my count inside this answer in the

for(int i=0;i<size;i++){
    for(int j=i+1;j<size;j++){
        for(int k=j+1;j<size;j++){
            if(arr[i]+arr[j]+arr[k]==targetsum){
                ans++;
            }
        }
    }
}
cout<<ans<<endl;
return 0;


}