class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root == NULL) {
            return new TreeNode(val);
        }
        TreeNode * cur = root;
        while(true){
            if(root->val > val){
            if(root->left!=NULL){
                root=root->left;
            }
            else{
                root->left = new TreeNode(val);
                break;
            }}
            if(root->val < val){
            if(root->right!=NULL){
                root=root->right;
            }
            else{
                root->right = new TreeNode(val);
                break;
            }}
        }
        return cur;}
};

// https://leetcode.com/problems/insert-into-a-binary-search-tree/

// Understand the while(true) and break usage

// This is used with no condition and loop is broke when we acheived what we want
