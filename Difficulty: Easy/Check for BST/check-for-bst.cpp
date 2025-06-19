class Solution {
  public:
    // Function to check whether a Binary Tree is BST or not.
    void inorder(Node *root,vector<int>&arr)
    {
        if(root != NULL)
        {
            inorder(root->left,arr);
            arr.push_back(root->data);
            inorder(root->right,arr);
        }
    }
    bool isBST(Node* root) {
        // Your code here
        vector<int>arr;
        inorder(root,arr);
        int flag = 1;
        for(int i =1 ; i < arr.size() ; i++)
        {
            if(arr[i-1] > arr[i])
            {
                flag = 0;
                break;
            }
        }
        if(flag == 0)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
};

