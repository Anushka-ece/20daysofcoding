class Solution {
public:
//since ans vector is modified at each stage,therefore & has been used
void printleft(Node* root,vector<int> &ans)
{
   if(root==NULL)
   return;
   if(root->left)
   {
       ans.push_back(root->data);
       printleft(root->left,ans);
   }
   else if(root->right)
   {
       ans.push_back(root->data);
       printleft(root->right,ans);
   }
}

void printleaf(Node* root,vector<int> &ans)
{
    if(root==NULL)
    return;
    //check if there is any left child of this node
    printleaf(root->left,ans);
    
    //condition in which there is no left child and right child then print that node
    if(!root->left and !root->right)
    ans.push_back(root->data);
    
    //check if there is any right child of this node
    printleaf(root->right,ans);
    
}

void printright(Node* root,vector<int> &ans)
{
    if(root==NULL)
    return;
    if(root->right)//here firstly right side is checked instead of left unlike the printleft function,as we have to print right side of nodes in reverse order
    {
        printright(root->right,ans);
        ans.push_back(root->data);
    }
    else if(root->left)
    { 
        printright(root->left,ans);//this step is also revrsed in printright function as firstly we are checking that whether there is any rightmost node at first and later we will print it to get these printed in the reverse order
        ans.push_back(root->data);
    }
}

    vector <int> boundary(Node *root)
    {
        vector<int>ans;
      
        //all functions are written in the order in which corresponding nodes are to be printed
        
        //firstly root node will be printed
        ans.push_back(root->data);
        
        //then print all nodes of left side tree
        printleft(root->left,ans);
        
        //then print all the leaf nodes
        printleaf(root,ans);
        
        //now print all the nodes of right side but in reverse manner as given in question
        printright(root->right,ans);
        
        //print ans vector at end
        return ans;
    }
};
