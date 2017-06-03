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
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL)
        {
            return NULL;
        }
        compute(root);
        return root;
    }
    int compute(TreeNode* root)
    {
        if((root->left==NULL)&&(root->right==NULL))
        {
            return 0;
        }
        else if((root->left!=NULL)&&(root->right!=NULL))
        {
            compute(root->left);
            TreeNode* u=root->left;
            compute(root->right);
            root->left=root->right;
            root->right=u;
        }
        else if((root->left!=NULL)&&(root->right==NULL))
        {
            compute(root->left);
            TreeNode* u=root->left;
            root->left=NULL;
            root->right=u;
        }
        else
        {
            compute(root->right);
            TreeNode* u=root->right;
            root->right=NULL;
            root->left=u;
        }
        return 0;
    }
};