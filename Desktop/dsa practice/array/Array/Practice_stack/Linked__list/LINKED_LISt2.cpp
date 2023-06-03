#include<iostream>
using namespace std;
  // CLEAN CODE OF LINKED LIST
  // Insertatfirst and insertAtEnd
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


void insertAtEnd(Node*tail,int d){
    Node*temp=new Node(d);
    Node*temp2=tail;
    while(temp->next!=NULL){
     temp=temp->next;
    }
      temp->next=temp2;

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
   Node* node1=new Node(1);
   
         Node*head=node1;
         Node*tail=node1;
         
insertAtEnd(tail,65);
print(tail);


insertAtEnd(tail,45);
print(tail);
      
return 0;

}