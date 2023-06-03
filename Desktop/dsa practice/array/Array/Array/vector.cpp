#include<iostream>
using namespace std;
#include<vector>

int main(){
vector<vector<int> >arr;
vector<int>a{1,2,3};
vector<int>b{34,44,4};
vector<int>c{34,44,4};

arr.push_back(a);
arr.push_back(b);
arr.push_back(c);

for(int i=0;i<arr.size();i++){  // print row
    for(int j=0;j<arr[0].size();j++){  // print column insted of arr[0] we used arr[i] if no. column different
        cout<<arr[i][j]<<" ";
    }cout<<endl;
}                       }