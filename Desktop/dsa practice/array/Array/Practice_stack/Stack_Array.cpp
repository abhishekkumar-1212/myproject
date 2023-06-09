//  Q=> Stack implement  using by array.
   // If top index=-1 then we are either is underflow or stack is empty
   // When we push element in the stack first we shift our top index
  // For check  stack is full()  top_index=ar.size()-1 


// With time Complexity O(1)  with constant time interval
 #include<iostream>
 #include<stack>
 #include<limits.h>
 using namespace std;

    class Stack {
  
int capacity;
int *arr;   // Problem 
int top;

public:
Stack(int c){ // MAke constructor and pass capacity c
this->capacity=c;
arr=new int(c);  // Make array dynamically
this->top=-1;

}
   void push(int data){
     if(this->top==capacity-1){// here we declare size of stack 
     cout<<"Stack is overflow"<<endl;
     return ;
           
     }
     this->top++;
     this->arr[this->top]=data;

   }
     int pop(){
        if(this->top==-1){
            cout<<"Stack is underflow"<<endl;
            return INT_MIN;

        }
        this->top--;   // here we pop the element in the stack
     }
        
   int getTop(){
    if(this->top==-1){
        cout<<"UNDERFLOW"<<endl;
        return INT_MIN;
    }
    return this-> arr[this->top];
   }
   bool isEmpty(){
    return this->top==-1;

   }
   int size(){
    return this->top+1;
   }
   bool isFull(){
    return this->top=this->capacity-1;    
   }

    };





 int main(){
// Now make an object 
Stack st(5);
st.push(5);
st.push(6);
st.push(7);
st.push(90);
st.push(1);
st.push(70);
cout<<st.getTop()<<"\n";
cout<<st.size()<< endl;
cout<<st.isFull();
return 0;
 }  
