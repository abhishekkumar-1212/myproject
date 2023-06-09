#include<iostream>
using namespace std;
int main(){

int n=10;
int arr[n];


for(int i=0;i<n;i++){
    arr[i]=i;
}

for(int i=n;i>=0;i--){
cout<<arr[i]<<" ";

}
cout<<endl;

return 0;

}