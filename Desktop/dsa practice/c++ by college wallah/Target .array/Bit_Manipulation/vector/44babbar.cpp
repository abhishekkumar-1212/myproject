#include<iostream>
using namespace std;
#include<vector>

int findunique(vector<int>v){
  int ans=0;
for(int i=0;i<v.size();i++){
  ans=ans^v[i];
}
return ans;
}

int main(){

int n;
cout<<"Enter the size of vector "<<endl;
cin>>n;

// Creating the vector
vector<int>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}


cout<<findunique(v);
}