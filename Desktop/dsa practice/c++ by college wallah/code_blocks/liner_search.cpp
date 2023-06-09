#include<iostream>
using namespace std ;
void linear(int arr[]){
    int key ;
    int ans=-1;  //  and if key is not found then return -1;
    cout<<"Enter the value of key"<<endl;
  cin>>key;
  
for(int i=0;i<5;i++){

    if( arr[i]==key){
    ans=i;
 
     // If something is print single the then we print inside the function.
    }
}
if(ans==-1){
    cout<<"Key Not found ";
}else{
    cout<<"key is found "<<  ans;
}
}



int main(){

int arr[]={1,2,4,6,7};

linear(arr);

}