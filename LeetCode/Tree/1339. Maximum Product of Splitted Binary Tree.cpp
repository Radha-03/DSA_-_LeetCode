class Solution {
public:
    long long sum = 0;
    long long maxAns = 0;
    const long long MOD = 1e9 + 7;

    void totalSum(TreeNode* root) {
        if (!root) return;
        sum += root->val;
        totalSum(root->left);
        totalSum(root->right);
    }

    long long dfs(TreeNode* root) {
        if (!root) return 0;

        long long left = dfs(root->left);
        long long right = dfs(root->right);

        long long curr = left + right + root->val;

        long long product = curr * (sum - curr);
        maxAns = max(maxAns, product);

        return curr;
    }

    int maxProduct(TreeNode* root) {
        totalSum(root);
        dfs(root);
        return maxAns % MOD;
    }
};
