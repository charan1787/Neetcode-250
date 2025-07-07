
class Solution {
public:
    bool isValidBST(TreeNode* root) {
       return help(root,LONG_MIN, LONG_MAX);
    }

    bool help(TreeNode *root, long left, long right){
        if(!root) return true;
 
        if(root->val > left && root->val < right){
            return help(root->left,left, root->val) && help(root->right,root->val,right);
        }

        return false;
    }
};

// Tricky to undersatnd 

// Have to revise later
