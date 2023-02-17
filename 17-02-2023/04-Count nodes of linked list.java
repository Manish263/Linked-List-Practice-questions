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


 public static int getCount(Node head)
    {
        int c=1;
        while(head.next!=null) {
            c++;
            head=head.next;}
        return c;
    }
