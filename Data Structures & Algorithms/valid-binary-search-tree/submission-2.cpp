/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    bool isValid(TreeNode* root,int mini,int maxi){
        if(!root)return true;
        if(mini>=root->val ||  maxi<=root->val)return false;
        
        return isValid(root->left,mini,root->val) && isValid(root->right,root->val,maxi);
    }
    bool isValidBST(TreeNode* root) {
        
        return isValid(root,-1001,1001);
    }
        
};
