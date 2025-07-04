
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;
        queue<TreeNode*> q;
        if(root == NULL) return result;
        q.push(root);
        //result.push_back(root->val);

        TreeNode * p;

        while(!q.empty()){
            int size = q.size();
            vector<int> level;
            for(int i =0;i<size;i++){

            
            p = q.front();
            level.push_back(p->val);
            q.pop();

            if(p->left != NULL) {q.push(p->left);}
            if(p->right!=NULL) {q.push(p->right);}
            }

            result.push_back(level);
            
        }

        return result;
    }
};

// Take a queue 

// add root into the queue first

// find size of queue loop size time with pop and push children operation

// have to use double vector
