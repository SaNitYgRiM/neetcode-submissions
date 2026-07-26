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
    int maxiDia(TreeNode* root){
        if(root==NULL)return 0;

       int maxi=0;
       maxi=max(maxi,dfs(root->left)+dfs(root->right));
       
       return max({maxi,maxiDia(root->left),
       maxiDia(root->right)});

    }
    int dfs(TreeNode* root){
        if(root==NULL)return 0;

        int left=1+dfs(root->left);
        int right =1+dfs(root->right);
        
        return max(left,right);
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        return maxiDia(root);
    }
};
