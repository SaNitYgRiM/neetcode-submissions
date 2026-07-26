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
    bool findNode(TreeNode* root, TreeNode* subRoot){
        if(!root)return 0;
        bool res=false;
        if(root->val==subRoot->val)res=dfs(root,subRoot);

        if(!res)res=findNode(root->left,subRoot) ||findNode(root->right,subRoot);

        return res;
    }

    bool dfs(TreeNode* p, TreeNode* q){
        if(!p && !q)return true;
        if(!p || !q || (p->val!=q->val))return false;

        return dfs(p->left,q->left) && dfs(p->right,q->right);
    }
public:
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        return findNode(root,subRoot);
    }
};
