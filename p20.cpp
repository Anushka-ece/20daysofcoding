class Solution
{
    public:
    //Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root)
    {vector<int>ans;//vector for storing resultant
    if(root==NULL)
    return ans;
    
       queue<Node* >q;
      q.push(root);
       while(!q.empty())
       {
           int n=q.size();
           for(int i=1;i<=n;i++)
           {
               Node* curr=q.front();
               q.pop();
               if(i==n)//last element at any particular level will be the rightmost element
               ans.push_back(curr->data);
               if(curr->left!=NULL)
               q.push(curr->left);
               if(curr->right!=NULL)
               q.push(curr->right);
           }
       }
       return ans;
       
    }
};
