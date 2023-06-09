#include<iostream>
using namespace std;
// Here is the concept of key in the array 
int main(){

int arr[]={43,45,66, 70};
int size=sizeof(arr)/sizeof(arr[0]);
int key=70;
int ans=-1;
for(int i=0;i<size;i++){
if(arr[i]==key){
    ans=i;
} 
}
cout<<ans<<endl;


}