/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    void traverse(Node *root,int &sumi,int l,int r)
    {
        if(root == NULL)
        {
            return;
        }
        if(root->data >= l && root->data <= r){
        sumi += root->data;
        }
        
        traverse(root->left,sumi,l,r);
        traverse(root->right,sumi,l,r);
    }
    int nodeSum(Node* root, int l, int r) {
        // code here
        int sumi = 0;
        traverse(root,sumi,l,r);
        
        return sumi;
    }
};
