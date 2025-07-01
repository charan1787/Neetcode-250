class Solution {
public:
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(!root) return false;

        if(isSameTree(root,subRoot)) return true; ;

        return isSubtree(root->left,subRoot) || isSubtree(root->right,subRoot);
        
    }


    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p == NULL && q == NULL) return true;

        if(p == NULL || q == NULL ) return false;

        if(p->val != q->val) return false;

        return isSameTree(p->left,q->left) && isSameTree(p->right,q->right);
    }
};

// https://leetcode.com/problems/subtree-of-another-tree/description/

// 
