/*
class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node* intersectPoint(Node* head1, Node* head2) {
        //  Code Here
    unordered_map<Node *,bool>mpp;
    
    Node *temp = head1;
    
    while(temp != NULL)
    {
        mpp[temp] = true;
        temp = temp->next;
    }
    
    temp = head2;
    
    while(temp != NULL){
       if(mpp[temp] == true){
           return temp;
       }
       temp = temp->next;
    }
    
    return NULL;
    }
};