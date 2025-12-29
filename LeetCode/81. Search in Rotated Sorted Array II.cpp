class Solution {
public:
    bool search(vector<int>& nums,int target, int start,int end){
        int mid=start+(end-start)/2;
        if(start>end)return false;
        if(nums[mid]==target)return true;
        if((nums[start] == nums[mid]) && (nums[end] == nums[mid]))
        {
            return search(nums,target,start+1,end-1);
        }
        else if(nums[mid]>=nums[start]){
            if(nums[mid]>target&&nums[start]<=target){
                return search(nums,target,start,mid-1);
            }
            else
            {
                return search(nums,target,mid+1,end);
            }
        }
        else{
            if(nums[mid]<target&&nums[end]>=target){
                return search(nums,target,mid+1,end);
            }
            else
            {
                return search(nums,target,start,mid-1);
            }
        }
        return false;
    }
    bool search(vector<int>& nums, int target) {
        return search(nums,target,0,nums.size()-1);
    }
};
