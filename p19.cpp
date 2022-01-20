vector<int> leftView(Node *root)
{
   // Your code here
   vector<int>ans;//Vector for storing answer
   if(root==NULL)
   return ans;
   
   queue<Node*>q;//queue declared for storing node elements of tree
   q.push(root);
   
   while(!q.empty())
   {int n=q.size();
       for(int i=1;i<=n;i++)
   {
      Node* curr=q.front();
      q.pop();
     if(i==1)//first element at each level comes as the left view of tree
     ans.push_back(curr->data);
     if(curr->left!=NULL)
     q.push(curr->left);
     if(curr->right!=NULL)
     q.push(curr->right);
   }
  
   }
    return ans;
}
