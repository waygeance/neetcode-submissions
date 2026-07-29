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
    vector<int> rightSideView(TreeNode* root)
    {
        queue<TreeNode*> q;
        if(root!=nullptr)q.push(root);
        vector<int> ans;

        while(q.size()!=0)
        {
            int qSize= q.size();
            TreeNode* rig;
            for(int i=0; i<qSize; i++)
            {
                TreeNode* temp= q.front();
                rig=temp;
                q.pop();
                if(temp->left!=nullptr)q.push(temp->left);
                if(temp->right!=nullptr)q.push(temp->right);
            }

            ans.push_back(rig->val);
        }

        return ans;        
    }
};
