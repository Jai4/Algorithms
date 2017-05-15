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
    vector<int> ls;vector<int> rs;
public:
    void lst(TreeNode *root)
    {
        if(root==NULL){return;}
        ls.push_back(root->val);
        if((root->left==NULL)&&(root->right!=NULL)){ls.push_back(-1);}
        lst(root->left);
        if((root->left!=NULL)&&(root->right==NULL)){ls.push_back(-1);}
        lst(root->right);
    }
    void rst(TreeNode *root)
    {
        if(root==NULL){return;}
        rs.push_back(root->val);
        if((root->left!=NULL)&&(root->right==NULL)){rs.push_back(-1);}
        rst(root->right);  
        if((root->left==NULL)&&(root->right!=NULL)){rs.push_back(-1);}
        rst(root->left);
    }
    bool isSymmetric(TreeNode* root) {
      
    if(root==NULL){return true;}  
    if((root->left!=NULL)&&(root->right!=NULL))
    {
        lst(root->left);
        rst(root->right);
    }
    else
    {
        if((root->left==NULL)&&(root->right==NULL)){return true;}
        return false;
    }
       
        if(ls.size()!=rs.size())
        {
            return false;
        }
        else
        {
            for(unsigned int i=0;i<ls.size();i++)
            {
                if(ls.at(i)!=rs.at(i)){return false;}
            }
        }
        return true;
    }
};