/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head,int data)
{
  // Complete this method

    Node *temp=head;
    
    if(head==NULL)
        {
            Node *new_node= (Node *) malloc(sizeof(struct Node));
            temp=new_node;
            new_node->data=data;
            new_node->next=NULL;
            return temp;
        
    }
    
    while(temp->next != NULL)
        {
        temp=temp->next;
    }
    
    Node *new_node= (Node *) malloc(sizeof(struct Node));
    temp->next=new_node;
    new_node->data=data;
    new_node->next=NULL;
     return head;
        
    

}
