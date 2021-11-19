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
    private:
    void dfs(TreeNode *node , vector<int>&preoder)
    {
        if(node==NULL)
        {
            return ;
        }
        preoder.push_back(node->val);
        dfs(node->left,preoder);
        dfs(node->right,preoder);
        
    }
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>preorder;
        dfs(root,preorder);
        return preorder;
    }
};