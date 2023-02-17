Geek loves linked list data structure. Given an array of integer arr of size n, Geek wants to construct the linked list from arr.

Construct the linked list from arr and return the head of the linked list.

Example 1:

Input:
n = 5
arr = [1,2,3,4,5]
Output:
1 2 3 4 5

ANS.
    Node* constructLL(vector<int>& arr) {
        Node *head=new Node(arr[0]);
        Node *temp=head;
        int l=arr.size(),c=1;
        while(c!=l){
            temp->next=new Node(arr[c]); c++;
            temp=temp->next;
        }
        return head;
    }
