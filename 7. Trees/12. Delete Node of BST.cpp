class Solution {
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL) return nullptr;

        if(root->val == key){
            //continue;
            if(root->left == NULL && root->right !=NULL) return root->right;
            else if(root->right == NULL && root->left != NULL) return root->left;
            else if(root->right == NULL && root->left == NULL) return nullptr;
            // when both children are present
            else {
                TreeNode * curr = root->right;
                while(curr->left!=nullptr){ curr = curr->left; }
                root->val = curr->val;
                root->right = deleteNode(root->right,root->val);
            }

        }
        else if(root->val > key){
            root->left = deleteNode(root->left,key);
        }
        else{
            root->right = deleteNode(root->right,key);
        }
        return root;
    }
};

//Tricky Logic, 

//Move root left or right until its equal to root value
//4 conditions when root->Val == key 

//1. when no child
//2. when 1 child (left and right)
//3. when both child present

//if both child there {
//find the next least element to replace the root -> to find next least element traverse left most node of the right branch.
//then delete the least node
//}

// https://www.youtube.com/watch?v=wMyWHO9F1OM
