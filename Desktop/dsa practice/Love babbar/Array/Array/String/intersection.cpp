#include<iostream>
using namespace std;
#include<vector>
int main(){
    vector<int>arr{1,2,3,3,5};
    vector<int>brr{1,6,7,3,3,5};

    vector<int>ans;

    for(int i=0;i<arr.size();i++){
        for(int j=0;j<brr.size();j++){
              if(arr[i]==brr[j]){
                brr[j]=-1;
                ans.push_back(arr[i]);
               
              }

        }

    }
       for(int value:ans){
        cout<<" "<<value<<" ";
        
       }
cout<<"hello";
}