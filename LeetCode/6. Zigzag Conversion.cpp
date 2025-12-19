class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1 || numRows >= s.size())
            return s;

        int n = s.size();
        int cycle = 2 * (numRows - 1);
        string result;

        for (int row = 0; row < numRows; row++) {
            for (int i = row; i < n; i += cycle) {
                result += s[i];

                int diag = i + cycle - 2 * row;
                if (row != 0 && row != numRows - 1 && diag < n) {
                    result += s[diag];
                }
            }
        }

        return result;
    }
};
