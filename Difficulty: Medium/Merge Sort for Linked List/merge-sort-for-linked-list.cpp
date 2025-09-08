/*
class Node {
public:
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

Node *split(Node *head)
{
    Node *first = head;
    Node *second = head;
    
    while(second != NULL && second->next != NULL)
    {
        second = second->next->next;
        if(second){
            first = first->next;
        }
    }
    
    Node *temp = first->next;
    first->next = NULL;
    return temp;
}

Node *merge(Node *first,Node *second)
{
    if(first == NULL)
    {
        return second;
    }
    else if(second == NULL)
    {
        return first;
    }
    
    if(first->data < second->data)
    {
        first->next = merge(first->next,second);
        return first;
    }
    else if(first->data > second->data)
    {
        second->next = merge(first,second->next);
        return second;
    }
}
class Solution {
  public:
    Node* mergeSort(Node* head) {
        // code here
        if(head == NULL || head->next == NULL)
        {
            return head;
        }
        
        Node *first = head;
        Node *second = split(head);
        
        first = mergeSort(first);
        second = mergeSort(second);
        
       return merge(first,second);
    }
};