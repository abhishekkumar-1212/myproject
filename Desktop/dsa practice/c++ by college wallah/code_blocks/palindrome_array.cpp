#include<iostream>
using namespace std;
int main(){
    int arr[]={1,1,0,1,1000};
int n=sizeof(arr)/sizeof(arr[0]);

// By using the two pointer approach ;
int start=0;
int end=n-1;
/*
int ans=-1;  // If array is not palindrome 
for(int i=0;i<n-1;i++){
    if(arr[start]== arr[end]){
   cout<<"array is palindrome "<<endl;
   start++;
   end--;
    }
    else{
        cout<<"NOT "<<endl;
    }

}  // uses this process to overcome the loops 
*/
cout<<"OUR ARRAY IS PALINDROME "<<endl;
bool isPallindrome= true;  // We take boolean here to overcome the loop 
while(start<end){
    if(arr[start]!=arr[end]){
        isPallindrome=false;     
    
    }
    start++;
    end--;
    
}
if(isPallindrome==true){
    cout<<"yes"<<endl;
}

else {
    cout<<"NO"<<endl;
}

}