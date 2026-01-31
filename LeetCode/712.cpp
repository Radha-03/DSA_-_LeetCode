class Solution {
public:
    int dp[1001][1001];

    int solve(const string& s1, const string& s2, int i, int j) {
        if (i == s1.size() && j == s2.size()) return 0;

        if (dp[i][j] != -1) return dp[i][j];

        if (i == s1.size()) {
            return dp[i][j] = s2[j] + solve(s1, s2, i, j + 1);
        }

        if (j == s2.size()) {
            return dp[i][j] = s1[i] + solve(s1, s2, i + 1, j);
        }

        if (s1[i] == s2[j]) {
            return dp[i][j] = solve(s1, s2, i + 1, j + 1);
        }

        int del1 = s1[i] + solve(s1, s2, i + 1, j);
        int del2 = s2[j] + solve(s1, s2, i, j + 1);

        return dp[i][j] = min(del1, del2);
    }

    int minimumDeleteSum(string s1, string s2) {
        memset(dp, -1, sizeof(dp));
        return solve(s1, s2, 0, 0);
    }
};
