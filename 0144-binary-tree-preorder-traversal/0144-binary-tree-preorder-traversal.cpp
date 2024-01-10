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
    vector<int>preorder(TreeNode*temp,vector<int>&ans){
        if(temp==NULL){
            return ans;
        }
        ans.push_back(temp->val);
        preorder(temp->left,ans);
        preorder(temp->right,ans);
        
        return ans;
    }
    vector<int> preorderTraversal(TreeNode* root) {
        TreeNode*temp=root;
        vector<int>ans;
        return preorder(temp,ans);
    }
};