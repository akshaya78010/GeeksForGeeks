/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}*head;
*/

class Solution {
  public:
    void deleteNode(Node* del_node) {
        // code here
        Node *temp = del_node;
        
        Node *prev = temp;
        while(temp->next != NULL){
            prev = temp;
           temp->data = temp->next->data;
           temp = temp->next;
        }
        
        prev->next = NULL;
    }
};