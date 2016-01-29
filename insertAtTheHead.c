/*
  Insert Node at the begining of a linked list
  Initially head pointer argument could be NULL for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
return back the pointer to the head of the linked list in the below method.
*/
Node* Insert(Node *head,int data)
{
  
    Node *temp=head;
    
    if(head==NULL)
        {
        
        Node *new_node=(Node *) malloc(sizeof(struct Node));
        head=new_node;
        new_node->data=data;
        new_node->next=NULL;
        return head;
    }
    else
        {
        Node *new_node=(Node *) malloc(sizeof(struct Node));
        new_node->next=head;
        new_node->data=data;
        head=new_node;
        
        return head;
        

    }
     
    
}
