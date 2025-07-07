
class Solution {
public:
    TreeNode* removeLeafNodes(TreeNode* root, int target) {
        return helper(root,target);
        
    }

    TreeNode * helper(TreeNode * & root,int target){
        if(root==NULL) return NULL;

        root->left = helper(root->left,target);
        root->right = helper(root->right,target);

        if(root->left == NULL && root->right == NULL && root->val == target){
            return NULL;
        }
        return root;
    }
};

// First the branches are updated or checked and then the condition of leaf node and target are checked.
