/*
  Delete Node at a given position in a linked list 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Delete(Node *head, int position)
{
  
    Node *temp=head;
    if(position==0)
        {
        
        head=temp->next;
        free(temp);
        return head;
        
    }
    else
        {
        position--;
        
        while(position)
        {
            
            temp=temp->next;
            position --;
        }
        
        
        Node *del = temp->next;
        
        temp->next=del->next;
        
        
        free(del);
        return head;
        
        
    }
    
    
}
