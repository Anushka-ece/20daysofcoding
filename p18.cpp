class Solution {
    int count;
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        
        count = 0;
        return constructTree(preorder, inorder, 0, inorder.size()-1);
    }
    
    TreeNode* constructTree(vector<int>& preorder, vector<int>& inorder, int start, int end)
    {
       
        TreeNode *root; 
        
        if (start > end)
            return NULL;
        
        
        int rootVal = preorder[count++];
        int rootindex = distance(inorder.begin(), find(inorder.begin(), inorder.end(), rootVal));
                           
        root = new TreeNode(rootVal);
        root->left = constructTree(preorder, inorder, start, rootindex - 1);
        root->right = constructTree(preorder, inorder, rootindex + 1, end);
        
        return root;
    }
};
