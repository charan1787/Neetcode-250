class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> result;
        if (root == NULL) return result;
        queue<TreeNode *> q;
        TreeNode *p;
        q.push(root);

        while(!q.empty()){
            int size = q.size();
            //vector<int> level;
            for(int i =0;i<size;i++){
                p = q.front();
                if(i==0) result.push_back(p->val);
                q.pop();
                if(p->right!=NULL) {q.push(p->right);}
                if(p->left!=NULL) {q.push(p->left);}
            }
            
        }
        
        return result;
    }
};

// https://leetcode.com/problems/binary-tree-right-side-view/description/

// Same as level order traversal code

// just insert right child first into the queue and add 1st element of for loop(each level) in to the result queue.
