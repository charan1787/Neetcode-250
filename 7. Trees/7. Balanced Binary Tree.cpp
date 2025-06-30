
class Solution {
public:
    bool isBalanced(TreeNode* root) {
        int result = 1;
        help(root,result);
        if(result == 0) return false;
        else return true;
    }

    int help(TreeNode* root,int &res){
        if(root == NULL) return 0;

        int left = help(root->left, res);
        int right = help(root->right,res);

        if(abs(left-right)>1) res = 0;

        return 1 + max(left,right);

    }
};

// https://leetcode.com/problems/balanced-binary-tree/
// A balanced binary tree is a binary tree where the heights of the left and right subtrees of every node differ by at most 1.
