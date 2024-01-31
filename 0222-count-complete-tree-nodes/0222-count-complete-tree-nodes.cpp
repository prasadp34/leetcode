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
    void check(TreeNode*root,int &cnt){
        if(root==NULL) return ;
        cnt++;
        check(root->left,cnt);
        check(root->right,cnt);
        
        return;
        
        
    }
    int countNodes(TreeNode* root) {
        int cnt=0;
        check(root,cnt);
        return cnt;
    }
};