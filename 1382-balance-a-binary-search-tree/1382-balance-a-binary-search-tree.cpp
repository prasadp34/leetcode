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
    TreeNode*bst(int s,int e,vector<int>&ans){
        if(s>e){
          return NULL;
        }
        int mid=(s+e)/2;
        TreeNode*temp=new TreeNode(ans[mid]);
        temp->left=bst(s,mid-1,ans);
        temp->right=bst(mid+1,e,ans);
        return temp;
    }
    
    void inorder(TreeNode*root,vector<int>&ans){
        if(root==NULL){
            return;
        }
        
        inorder(root->left,ans);
        ans.push_back(root->val);
        inorder(root->right,ans);
    }
    TreeNode* balanceBST(TreeNode* root) {
        vector<int>ans;
        inorder(root,ans);
        
        return bst(0,ans.size()-1,ans);
    }
};