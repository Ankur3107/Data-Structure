/*
  Insert Node at a given position in a linked list 
  head can be NULL 
  First element in the linked list is at position 0
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* InsertNth(Node *head, int data, int position)
{
  // Complete this method only
  // Do not write main function.
    
    Node *temp=head;
    
    if(position==0)
        {
        Node *new_node=(Node *) malloc(sizeof(struct Node));
        
        new_node->data=data;
        new_node->next=head;
        head=new_node;
        return head;
        
    }
    
    else
        {
        position--;
        while(position)
        {
        temp=temp->next;
        position--;
         }
        Node *prev;
        prev=temp;
        
        Node *new_node=(Node *) malloc(sizeof(struct Node));
        new_node->data = data;
        new_node->next=prev->next;
        prev->next=new_node;
        return head;
         }
    
    
    
    
    
    
}
