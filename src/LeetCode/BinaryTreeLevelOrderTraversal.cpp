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
     vector<vector<int>> outer;
   public:
   vector<vector<int>> levelOrder(TreeNode* root)
   {
       level(root,0);
       return outer;
   }
   void level(TreeNode *root,int p)
   {
       if(root==NULL){return;}
       if(outer.size() == p)
       {
           outer.push_back(vector<int>());
           
       }
       
       outer[p].push_back(root->val);
       level(root->left,p+1);
       level(root->right,p+1);
   }
    
};