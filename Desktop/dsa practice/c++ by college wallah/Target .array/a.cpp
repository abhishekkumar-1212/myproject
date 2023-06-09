#include<iostream>
using namespace std;
                       



int main(){

    int  arr[]={1,2,3,2,1};
    int n= sizeof(arr)/sizeof(arr[0]);
     int j=n-1;
     for(int i=0;i<n;i++){
        if(arr[i]==arr[j]){
            j--;
            cout<<"STRING IS PALINDROME "<<endl;
            break;
        }else{cout<<"NOT NOT "<<endl;
        break;}
     }
    
    return 0;
}