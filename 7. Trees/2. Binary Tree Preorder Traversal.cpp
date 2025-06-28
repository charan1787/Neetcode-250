
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector <int> result;
        help(root,result);
        return result;
    }

    void help(TreeNode * p, vector <int> & result){
        if(p!=NULL){
        result.push_back(p->val);
        help(p->left,result);
        help(p->right,result);}
    }
};

// https://leetcode.com/problems/binary-tree-preorder-traversal/
