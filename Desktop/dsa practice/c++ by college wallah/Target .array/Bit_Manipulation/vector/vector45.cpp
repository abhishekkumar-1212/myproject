// vector is the dynamic array 
// When all index fill of vector then it double its size
#include<iostream>
using namespace std;
#include<vector>
int main(){

vector<int>v(10,1);  // 10 is the size of the vector and every index place 1 element 
v.push_back(5);
cout<<v.size()<<endl;   
cout<<v.capacity()<<endl;
// Basically it is compiler dependent
for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
}
  vector<int > brr(11);
for(int i=0;i<brr.size();i++){
    cout<<brr[i]<<" ";
}
vector<int>arr{1,2,5,6};
for(int i=0;i<arr.size();i++){
    cout<<" " <<arr[i];
}

return 0;

}