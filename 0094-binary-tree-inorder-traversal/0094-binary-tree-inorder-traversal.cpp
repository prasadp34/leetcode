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
    
    void inorder(TreeNode*temp,vector<int>&ans){
        if(temp==NULL) return;
        
        inorder(temp->left,ans);
        ans.push_back(temp->val);
        inorder(temp->right,ans);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        TreeNode*temp=root;
        vector<int>ans;
        inorder(temp,ans);
        return ans;
    }
};