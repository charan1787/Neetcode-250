
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p == NULL && q == NULL) return true;

        if(p == NULL || q == NULL ) return false;

        if(p->val != q->val) return false;

        return isSameTree(p->left,q->left) && isSameTree(p->right,q->right);
    }
};

// https://leetcode.com/problems/same-tree/

// Rememebr the 2nd logic statement, it is smart and shirt one after the 1st statement.

// we dont need to write it as if(p) and not q || if(q) and not p.
