/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isCompleteTree(TreeNode* root) {
        queue<TreeNode*> q;
        bool cross=true;
        q.push(root);
        while(!q.empty()){
            TreeNode* top=q.front();q.pop();
            if(top->left!=NULL&&!cross){
                return false;
            }
            else if(top->left!=NULL){
                q.push(top->left);
            }
            else{
                cross=false;
            }
            if(top->right!=NULL&&!cross){
                return false;
            }
            else if(top->right!=NULL){
                q.push(top->right);
            }
            else{
                cross=false;
            }
        }

        return true;

    }
};
