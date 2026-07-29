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
    vector<vector<int>> levelOrder(TreeNode* root) 
    {
        queue<TreeNode*> q;
        if(root!=nullptr)q.push(root);
        vector<vector<int>> ans;

        while(q.size()!=0)
        {
            int qSize= q.size();
            vector<int> arr;

            for(int i=0; i<qSize; i++)
            {
                TreeNode* temp= q.front();
                q.pop();
                if(temp->left!=nullptr)q.push(temp->left);
                if(temp->right!=nullptr)q.push(temp->right);
                arr.push_back(temp->val);
            }

            ans.push_back(arr);
        }

        return ans;
    }
};
