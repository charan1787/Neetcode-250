class Solution {
public:
    int goodNodes(TreeNode* root) {
        int maxv= root->val;
        //int count = 0;
        
        return dfs(root,maxv);
    }

        int dfs(TreeNode * root, int maxv){
            int count = 0;
            if (root == 0) return 0;
            if (root->val >= maxv) count=1;
            else count = 0;
            maxv = max(maxv, root->val);
            
            if(root->left) count += dfs(root->left,maxv);
            if(root->right) count += dfs(root->right,maxv);

            return count;

        }
};

// https://leetcode.com/problems/count-good-nodes-in-binary-tree/description/

// https://www.youtube.com/watch?v=7cp5imvDzl4

// DFS Approach

// see if current is good node if yes 

// do 1 + left dfs + right dfs

// else 0 + ;eft dfs + right dfs

// see how max value is changed at every branch
