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
    void inorder(TreeNode*root,int k,vector<int>&ans){
        if(root==NULL){
            return;
        }
        inorder(root->left,k,ans);
        ans.push_back(root->val);
        inorder(root->right,k,ans);
    }
    bool findTarget(TreeNode* root, int k) {
        vector<int>ans;
        inorder(root,k,ans);
        
        int i=0;
        int j=ans.size()-1;
        while(i<j){
            int t=ans[i]+ans[j];
            if(t==k){
                return true;
            }
            else if(t>k){
                j=j-1;
            }
            else{
                i=i+1;
            }
            
            
        }
        return false;
        
    }
};