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
    
    void postorder(TreeNode*temp,vector<int>&ans){
    if(temp==NULL){
        return;
    }

    postorder(temp->left,ans);
    
    postorder(temp->right,ans);
    ans.push_back(temp->val);
}
    vector<int> postorderTraversal(TreeNode* root) {
        TreeNode*temp=root;
    vector<int>ans;
    postorder(root,ans);

    return ans;
    }
};