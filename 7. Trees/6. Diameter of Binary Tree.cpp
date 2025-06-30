class Solution {
public:

    int diameterOfBinaryTree(TreeNode* root) {
        
    int diameter = 0;
    help(root,diameter);

    return diameter;
    }

    int help(TreeNode * p,int &diameter){
        if(p == NULL) return 0;

        int left = help(p->left,diameter);
        int right = help(p->right,diameter);
        
        diameter = max(diameter, left + right);

        return 1 + max(left,right);
    }
};

// https://leetcode.com/problems/diameter-of-binary-tree/description/

// height of the tree + little modification

// medium level problem

// to know the diameter we calculate left height + right height for every node

// max is the answer
