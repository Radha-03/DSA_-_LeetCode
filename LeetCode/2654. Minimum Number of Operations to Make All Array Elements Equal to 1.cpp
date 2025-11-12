class Solution {
public:
    int gcd(int a,int b){
        if (b == 0)
        return a;
        return gcd(b, a % b);
    }
    int minOperations(vector<int>& nums) {
        int noOfOnce = 0;
        int n = nums.size();
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1)noOfOnce++;
        }
        if(noOfOnce>0)return n-noOfOnce;
        else{
           int minStepsTo1 = INT_MAX;
            for(int i = 0; i < n; i++) {
                int GCD = nums[i];
                for(int j = i+1; j < n; j++) {
                    GCD = gcd(GCD, nums[j]);
                    
                    if(GCD == 1) {
                        minStepsTo1 = min(minStepsTo1, j-i);
                        break;
                    }
                }
            }

            if(minStepsTo1==INT_MAX)return -1;
            else
                return minStepsTo1+n-1;
        }
    }
};
