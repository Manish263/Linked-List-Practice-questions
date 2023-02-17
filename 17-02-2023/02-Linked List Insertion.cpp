Create a link list of size N according to the given input literals. Each integer input is accompanied by an indicator which can either be 0 or 1. If it is 0, insert the integer in the beginning of the link list. If it is 1, insert the integer at the end of the link list. 
Hint: When inserting at the end, make sure that you handle NULL explicitly.

 ANS:
   Node *insertAtBegining(Node *head, int x) {
       Node *temp=new Node(x);
       temp->next=head;
       return temp;
    }
    
    
    //Function to insert a node at the end of the linked list.
    Node *insertAtEnd(Node *head, int x)  {
       Node *temp=new Node(x);
       if(head==NULL) return temp;
       Node *curr=head;
       while(curr->next!=NULL) curr=curr->next;
       curr->next=temp;
       return head;
    }
