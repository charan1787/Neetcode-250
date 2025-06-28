class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root == NULL) return 0;

        int m = maxDepth(root->left);
        int n = maxDepth(root->right);

        if(m>=n) return m + 1;
        else return n + 1;
    }
};

// https://leetcode.com/problems/maximum-depth-of-binary-tree/description/

// understand the simple recursion feature that works to find the depth
