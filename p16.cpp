class Solution {
public:
    int height(TreeNode* root)//function to find height of tree
    {
        if(root==NULL)
            return 0;
        return 1+max(height(root->left),height(root->right));
    }
    void solve(TreeNode* root,int &ans)
    {
        if(root==NULL)
            return ;
        int left=height(root->left);//height of left subtree
        int right=height(root->right);//height of right subtree
        ans=max(ans,left+right);//taking maximum value as diameter is the sum of maximum distance of //node from left ,maximum distance of node from right and 1 respectively
        //now we are solving for further subtrees of different nodes at different levels
        solve(root->left,ans);
        solve(root->right,ans);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int ans=0;
        solve(root,ans);
        return ans;
    }
};
