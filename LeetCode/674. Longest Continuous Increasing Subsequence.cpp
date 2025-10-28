class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int cont=1,ans=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1]){
                cont++;
            }
            else
                cont=1;
            ans=max(ans,cont);
        }
        return ans;
    }
};
