/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
    bool b=true;
public:
    int Balanced(TreeNode* root)
    {
        if(root==NULL){return 0;}
        int w=Balanced(root->left);
        int e=Balanced(root->right);
        if(abs(w-e)>1){b=false;}
        return max(w,e)+1;
    }
    bool isBalanced(TreeNode* root)
    {
    if(root==NULL){return true;}   
       int f1= Balanced(root->left);
       int f2= Balanced(root->right);
       if(abs(f1-f2)>1)
       {
           b=false;
       }
        if(b==true)
        {
            return true;
            
        }
        else
        {
            return false;
            
        }
    }
};