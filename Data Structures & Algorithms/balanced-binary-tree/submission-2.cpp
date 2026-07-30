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

    int dfs(TreeNode* root)
    {
        if(root==nullptr) return 0;

        return 1 + max(dfs(root->left), dfs(root->right));
    }

    bool isBalanced(TreeNode* root) 
    {
        if(root==nullptr) return true;
        int lH= dfs(root->left);
        int rH= dfs(root->right);

        bool a= (abs(lH-rH)<=1);

        return a && isBalanced(root->left) && isBalanced(root->right);
    }
};
