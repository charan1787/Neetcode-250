class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root == NULL) return nullptr;

        TreeNode * temp = invertTree(root->left);
        root->left = invertTree(root->right);
        root->right =  temp;

        return root;
    }
};

// https://leetcode.com/problems/invert-binary-tree/

// important to understand the simple swap technique works with the tree node as well.
