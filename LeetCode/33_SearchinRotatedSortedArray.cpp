/**There is an integer array nums sorted in ascending order (with distinct values).

Prior to being passed to your function, nums is possibly left rotated at an unknown index k (1 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,5,6,7] might be left rotated by 3 indices and become [4,5,6,7,0,1,2].

Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.

You must write an algorithm with O(log n) runtime complexity**/

class Solution {
    int rotetBS(vector<int>& nums,int target,int st,int end){
        int mid=st+(end-st)/2;
        if(st>end){return -1;}
        if(nums[mid]==target){
            return mid;
        }
        if(nums[st]<=nums[mid]){
            if(nums[st]<=target&&nums[mid]>=target){
                return rotetBS(nums,target,st,mid-1);
            }
            else{
                return rotetBS(nums,target,mid+1,end);
            }
        }
        else{
            if(nums[mid]<=target&&nums[end]>=target){
                return rotetBS(nums,target,mid+1,end);
            }
            else{
                return rotetBS(nums,target,st,mid-1);
            }
        }
    }
public:
    int search(vector<int>& nums, int target) {
        return rotetBS(nums,target,0,nums.size()-1);
    }
};
