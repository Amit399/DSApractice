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
        stack<TreeNode*>S1, S2;
        S1.push(root);
        TreeNode* temp;
        while(!S1.empty())
        {
            temp = S1.top();
            S1.pop();
            S2.push(temp);
            //A.push_back(temp->val);
            //S.pop();
            if(root->right)
            {
                S1.push(root->right);
            }
            if(root->left)
            {
                S1.push(root->left);
            }
        }
        while(!S2.empty())
        {
            temp=S2.top();
            S2.pop();
            A.push_back(temp->val);
        }
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>A;
        preorder(root, A);
        return A;
        
    }
};
