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
    int dfs(TreeNode* root,int prev){
        if(!root)return 0;
        int c=0;
        if(prev<=root->val){prev=root->val;c=1;}
        
        int l=dfs(root->left,prev);
        int r=dfs(root->right,prev);

        return c+l+r;

    }
    int goodNodes(TreeNode* root) {
        return dfs(root,-101);
    }
};
