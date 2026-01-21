class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
         vector<int> ans;
        
        for (int p : nums) {
            int t = 0;
            while (p & (1 << t)) {
                t++;
            }
            
            if (t == 0) {
                ans.push_back(-1);
            } else {
                ans.push_back(p - (1 << t-1));
            }
        }
        
        return ans;
    }
};
