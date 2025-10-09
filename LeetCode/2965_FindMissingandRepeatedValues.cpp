class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<int> ans;
        vector<bool> arr(n*n,false);
        unordered_set<int> set;
        int sum=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(set.find(grid[i][j])!=set.end()){
                    ans.push_back(grid[i][j]);
                }
                else{
                    set.insert(grid[i][j]);
                    sum+=grid[i][j];
                }
            }
        }
        ans.push_back((((n*n)*((n*n)+1))/2)-sum);
        return ans;
    }
};
