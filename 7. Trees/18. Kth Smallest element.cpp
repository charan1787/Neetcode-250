class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        count = k;
        ans = 0;
        dfs(root);
        return ans;
    }
    int count;
    int ans;

    void dfs(TreeNode* node) {
        if (!node) return;

        dfs(node->left);

        if (count == 1) {
            ans = node->val;
        }

        count--;
        if (count > 0) {
            dfs(node->right);
        }
    }
};

// Use DFS
// Reduce k after reaching the left most end.
// when k == 1 take that value into the ans and print it.
