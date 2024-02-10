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
    TreeNode*bst(int mini,int maxi,int &i,vector<int> &preorder){
        if(i>=preorder.size()){
            return NULL;
        }
        if(preorder[i]>maxi || preorder[i]<mini){
            return NULL;
        }
        
        TreeNode* root=new TreeNode(preorder[i++]);
        root->left=bst(mini,root->val,i,preorder);
        root->right=bst(root->val,maxi,i,preorder);
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int mini=INT_MIN;
        int maxi=INT_MAX;
        int i=0;
        return bst(mini,maxi,i,preorder);
    }
};