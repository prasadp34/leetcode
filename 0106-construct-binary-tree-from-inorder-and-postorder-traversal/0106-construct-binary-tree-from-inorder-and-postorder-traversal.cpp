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
    int findpos(int &ele,vector<int>&inorder){
        for(int i=0;i<inorder.size();i++){
            if(inorder[i]==ele){
                return i;
            }
        }
        return -1;
    }
    TreeNode*check(vector<int>& inorder,vector<int>& postorder,int &index,int start,int end,int n){
        if(index<0 || start>end){
            return NULL;
        }
        int ele=postorder[index--];  //post decrement
        TreeNode* root=new TreeNode(ele);
        int pos=findpos(ele,inorder);
        
        root->right=check(inorder,postorder,index,pos+1,end,n);
        root->left=check(inorder,postorder,index,start,pos-1,n);
        
        
        return root;
        
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n=inorder.size();
        int index=n-1;
        return check(inorder,postorder,index,0,n-1,n);
        
    }
};