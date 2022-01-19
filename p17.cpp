class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root==NULL)
            return 0;
        int lh=maxDepth(root->left);//height of left subtree
        int rh=maxDepth(root->right);//height of right subtree
        return 1+max(lh,rh);
    }
};
