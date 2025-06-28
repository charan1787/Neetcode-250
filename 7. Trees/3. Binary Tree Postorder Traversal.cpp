class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector <int> result;
        help(root,result);
        return result;
    }

    void help(TreeNode *p,vector <int> &vec){
        if(p!=NULL){
            help(p->left,vec);
            help(p->right,vec);
            vec.push_back(p->val);
        }
    }
};

// https://leetcode.com/problems/binary-tree-postorder-traversal/
