#include<iostream>
#include<algorithm>

using namespace std;

void rotate(int arr[],int  n,int k ){
reverse (arr,arr+n);
    reverse(arr,arr+k);
    reverse(arr+k,arr+n);

}



int main(){
int k;
cout<<"enter the value of k "<<endl;
cin>>k;
int arr[]={1,2,3,4,5,6,7};
int n= sizeof(arr)/sizeof(arr[0]);

 //  array reverse from zero index to last (n-1 ) index;
cout<<"original array "<<endl;
for(int i=0;i<n;i++){


cout<<arr[i]<<" ";

}
rotate(arr,n,k);
cout<<"rotated array "<<endl;
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}

return 0;

}