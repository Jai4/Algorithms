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
    int h,p1,p2;int d;
public:
    int maxDepth(TreeNode* root) {
        return root==NULL ? 0: max(maxDepth(root->left),maxDepth(root->right))+1;
    }
    
       
       
        
        
    
};