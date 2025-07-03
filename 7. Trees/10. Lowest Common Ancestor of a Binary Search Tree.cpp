
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
            
            
            if(root == nullptr) return root;

            if(root->val < p->val && root->val < q->val){
                return lowestCommonAncestor(root->right,p,q);
            } 
            else if( root->val > p->val && root->val > q->val ){
                return lowestCommonAncestor(root->left, p, q);
            }
            else return root;
    }
};

// https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/

// Recursive Solution

// if root<p<q then go root->right
	// else if p<q<root then go root->left
	// else return root (as the condition will be p<root<q) 
