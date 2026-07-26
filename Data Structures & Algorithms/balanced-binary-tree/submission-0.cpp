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
    int dfs(TreeNode* root){
        if(!root)return 0;

        
        int left=0,right=0;
        
        
        int l=dfs(root->left);
        if(l==-1)return -1;
        else left=1+l;
        int r=dfs(root->right);
        if(r==-1)return -1;
        else right=1+r;

        if(abs(left-right)>1)return -1;

        return max(left,right);
    }
public:
    bool isBalanced(TreeNode* root) {
        return dfs(root)<0?false:true;
    }
};
