/**You are given a sorted array consisting of only integers where every element appears exactly twice, except for one element which appears exactly once.

Return the single element that appears only once.

Your solution must run in O(log n) time and O(1) space.**/

class Solution{
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        int st=0,end=n-1,mid;
        if(n==1){
            return nums[0];
        }
        while(st<=end){
            mid=st+(end-st)/2;
            if(mid==0&&nums[mid]!=nums[mid+1])return nums[mid];
            if(mid==n-1&&nums[mid]!=nums[mid-1])return nums[mid];

            if(nums[mid]!=nums[mid+1]&&nums[mid]!=nums[mid-1])return nums[mid];

            if(mid%2==0){
                if(nums[mid]==nums[mid-1]){
                    end=mid-1;
                }
                else{
                    st=mid+1;
                }
            }
            else{
                if(nums[mid]!=nums[mid-1]){
                    end=mid-1;
                }
                else{
                    st=mid+1;
                }
            }
        }
        return -1;
    }
};
