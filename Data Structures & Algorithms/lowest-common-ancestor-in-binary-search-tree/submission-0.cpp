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

    bool dfs(TreeNode* root, TreeNode* tar, vector<TreeNode*> &ans)
    {
        if(!root) return false;
        
        ans.push_back(root);
        if(root==tar) return true;
        if(dfs(root->left, tar, ans)) return true;
        if(dfs(root->right, tar, ans)) return true;
        ans.pop_back();
        return false;
    }

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) 
    {
        vector<TreeNode*> prr;
        vector<TreeNode*> qrr;
        dfs(root,q,qrr);
        dfs(root,p,prr);

        for(auto it: qrr) cout<<it->val<<" ";
        cout<<endl;
        for(auto it: prr) cout<<it->val<<" ";

        TreeNode* temp=root;
        for(int i=0; i<min(prr.size(),qrr.size()); i++)
        {
            if(prr[i]==qrr[i]) temp=prr[i];
            else break;
        } 

        return temp;
    }
};


//4-> 5 3 4
//2-> 5 3 1 2
