// Two pointer approach  by kartik sir.      
/* Reverse array 

#include<iostream>
using namespace std;
int main(){
int n=5;

int arr[]={1,2,3,4,5};
for(int i=n-1;i>=0;i--){
 cout<<arr[i];
}



}
*/
  
  // Reverse an array by using two pointer approaches
#include<iostream>
using namespace std;
void swap(int arr[]){
    int n=5;
int i=0;
int j=n-1;
while(i<j){

int temp=  arr[i];
arr[i]=arr[j];
arr[j]=temp;
i++;
j--;
}


}


int main(){
int n=5;
int arr[]={5,6,7,8,9};

swap(arr);
for(int i=0;i<n;i++){
cout<<arr[i];
}

}