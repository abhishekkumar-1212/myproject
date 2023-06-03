#include<iostream>
using namespace std;

bool findkey(int arr[][3],int row,int column,int key){
  for(int i=0;i<row;i++){  // here we traverse the whole array 
    for(int j=0;j<column;j++){
        if(arr[i][j]==key){
            return true ;
        }
    }
  }
  return false ;
}

void rowwisesum(int arr [][3],int row ,int column ){
    cout<<"PRINT THE Row Wise Sum "<<endl;
    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<column;j++){
            sum=sum+arr[i][j];
        }
        cout<<sum<<endl;
    }

}



int main(){
int arr[3][3]={{1,2,3},{4,3,1},{5,6,7}};
  int n= sizeof(arr)/sizeof(arr[0]);
        int row =3;
        int column=3;
        int key;
        cout<<"Please enter the va;ue of key "<<endl;
        cin>>key;
        
if(findkey(arr,row,column,key)){
    cout<<"Key is present in the this 2D array "<<endl;
}else{
    cout<<"NO PLEASE ENTER ANOTHER VALUE "<<endl;
}



}