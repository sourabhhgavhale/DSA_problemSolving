/*
Given the root of a binary tree, return the inorder traversal of its nodes' values.

 

Example 1:

Input: root = [1,null,2,3]

Output: [1,3,2]

*/

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

    void inOrder(TreeNode* root, vector<int> &ans)
    {
        if(!root)
            return;

        if(root->left)
            inOrder(root->left, ans);

        ans.push_back(root->val);
        
        if(root->right)
            inOrder(root->right, ans);
    }

    vector<int> inorderTraversal(TreeNode* root) {
    
     vector<int> ans;
     inOrder(root, ans);
     return ans;

    }
};
