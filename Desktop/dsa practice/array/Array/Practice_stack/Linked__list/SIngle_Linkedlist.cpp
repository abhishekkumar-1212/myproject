#include<iostream>
using namespace std;

// Q-> InsertatFirst

class Node{
    public:
int data;
Node*next; //   next indcate the address of next node  Node 

// Now making COnstructor
Node(int data ){
  this ->data=data;
  this->next=NULL; // HERE WE DECIDE END POINT IN THE Linked list 
}



}
;


void InsertAtFirst(Node* &head ,int d){  //  which no.1 I insert At First
// Create New Node 
Node *temp=new Node(d);   // Create new Temporary 
temp -> next=head;  // After that head=temp;  
head=temp;

}


void printNode(Node* &head){
Node*temp=head;
while(temp!=NULL){   
  cout<<temp->data<<" ";
  temp=temp->next ;
}
cout<<endl;
}

int main(){
                                            
Node* node1=new Node(89);   // Make new Node 
  Node*head=node1;     // MY head=node1;
  

         printNode(head);
        InsertAtFirst(head,23);

 printNode(head);
        InsertAtFirst(head,98);

 printNode(head);
        InsertAtFirst(head,65);

return 0;
}