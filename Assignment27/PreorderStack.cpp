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
    void preorder(TreeNode* root, vector<int> &A)
    {
        if(!root)
        {
            return;
        }
        stack<TreeNode*>S;
        S.push(root);
        while(!S.empty())
        {
            TreeNode* temp = S.top();
            A.push_back(temp->val);
            S.pop();
            if(root->right)
            {
                S.push(root->right);
            }
            if(root->left)
            {
                S.push(root->left);
            }
        }
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>A;
        preorder(root, A);
        return A;
    }
};
