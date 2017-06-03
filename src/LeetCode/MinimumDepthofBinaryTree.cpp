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
    
public:
    int minDepth(TreeNode* root) {
        if(root==NULL)
        {
            return 0;
        }
        return abs(compute(root));
    }
    int compute(TreeNode* root)
    {
        if((root->left==NULL)&&(root->right==NULL))
        {
            return -1;
        }
        else if((root->left!=NULL)&&(root->right!=NULL))
        {
            return max(compute(root->left),compute(root->right))-1;
        }
        else if((root->left!=NULL)&&(root->right==NULL))
        {
            return compute(root->left)-1;
        }
         else if((root->left==NULL)&&(root->right!=NULL))
        {
            return compute(root->right)-1;
        }
    }
};