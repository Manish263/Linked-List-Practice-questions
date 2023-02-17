Given a linked list of n nodes and a key , the task is to check if the key is present in the linked list or not.

Example:

Input:
n = 4
1->2->3->4
Key = 3
Output:
True
Explanation:
3 is present in Linked List, so the function returns true. 
  
  
  
                                                                            ANS:


 static boolean searchKey(int n, Node head, int key) {
        while(head.next!=null){
            if(head.data==key) return true;
            head=head.next;
        }
        return false;
    }
