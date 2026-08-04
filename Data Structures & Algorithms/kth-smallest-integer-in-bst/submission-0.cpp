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

    void dfs(TreeNode* root, int k, multiset<int>& ms)
    {
        if(!root) return;
        ms.insert(root->val);
        if(ms.size()>k) ms.erase(--ms.end());
        dfs(root->right,k,ms);
        dfs(root->left,k,ms);
    }

    int kthSmallest(TreeNode* root, int k) 
    {
        multiset<int> ms;
        dfs(root,k,ms);
        return *ms.rbegin();
    }
};
