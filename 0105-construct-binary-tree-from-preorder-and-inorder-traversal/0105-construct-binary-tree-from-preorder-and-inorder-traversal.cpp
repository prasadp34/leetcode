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
    int findpos(int ele,vector<int>&inorder){
        for(int i=0;i<inorder.size();i++){
            if(ele==inorder[i]){
                return i;
            }
        }
        return -1;
    }
    
    
    TreeNode* solve(vector<int>&preorder,vector<int>&inorder,int &index,int istart,int iend,int size){
        if(index>size || istart>iend){
            return NULL;
        }
        int ele=preorder[index++];
        TreeNode*root=new TreeNode(ele);
        int position=findpos(ele,inorder);
        
        root->left=solve(preorder,inorder,index,istart,position-1,size);
        root->right=solve(preorder,inorder,index,position+1,iend,size);
        
        return root;
    }
    
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int index=0;
        int s=preorder.size();
        return solve(preorder,inorder,index,0,s-1,s);
        
    }
};