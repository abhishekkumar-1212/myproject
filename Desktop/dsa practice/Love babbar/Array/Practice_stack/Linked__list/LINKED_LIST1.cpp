#include<iostream>
using namespace std;
  // 
class Node{

public:
    int data;
  Node*next;

Node(int data){
    this->data=data;
    this->next=NULL;

}
      
};

void insertatfirst(Node*&head,int d){
  Node*temp=new Node(d);
  temp->next=head;
  head=temp;
  
}
void print(Node*&head){
    //basically i traverse our linked list 
        Node*temp=head;  // Now My  Node temp become head;
         while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
         }
         cout<<endl;
}


int main(){
   Node* temp=new Node(1);
         Node*head=temp;
insertatfirst(head,65);

print(head);

insertatfirst(head,45);

print(head);

insertatfirst(head,55);

print(head);

return 0;

}