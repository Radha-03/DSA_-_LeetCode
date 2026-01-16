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
    int dept;
    TreeNode* node;
    void dfs(TreeNode* root,int n){
        if(!root)return;
        dept=max(dept,n);
        dfs(root->left,n+1);
        dfs(root->right,n+1);
    }

    bool deppest(TreeNode* root,int i){
        if(root==NULL)return false;
        if(i==dept){
            node=root;return true;
        }

        bool left=deppest(root->left,i+1);
        bool right=deppest(root->right,i+1);

        if((right&&left)){
            node=root;
        }
        if((right||left))
            return true;
        else{
            return false;
        }
    }

    TreeNode* subtreeWithAllDeepest(TreeNode* root) {
        dfs(root,1);
        deppest(root,1);
        return node;
    }
};
