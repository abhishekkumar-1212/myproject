#include<iostream>
using namespace std;
#include<vector>
int main(){

int a[]={1,2,3};
int sizea=3;

int b[]={4,5};
int sizeb=2;
vector<int>ans;

// put all elements of vector a
for(int i=0;i<sizea;i++){
    ans.push_back(a[i]);
}
// Similary for second array  b
for(int i=0;i<sizeb;i++){
    ans.push_back(b[i]);
}
for(int i=0;i<ans.size();i++){
    cout<<(ans[i]);
}



}