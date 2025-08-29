/** A peak element is an element that is strictly greater than its neighbors.

Given a 0-indexed integer array nums, find a peak element, and return its index. If the array contains multiple peaks, return the index to any of the peaks.

You may imagine that nums[-1] = nums[n] = -∞. In other words, an element is always considered to be strictly greater than a neighbor that is outside the array.

You must write an algorithm that runs in O(log n) tim **/

class Solution {
public:
    int peackBS(vector<int>& arr,int st,int end){
        if(st>end){
            return -1;
        }
        int mid=st+(end-st)/2;
        if(arr.size()==1)return 0;
        if(mid==0){
            if(arr[mid]>arr[mid+1])
                return mid;
            else{
                return peackBS(arr,mid+1,end);
            }
        }
        if(mid==arr.size()-1){
            if(arr[mid]>arr[mid-1])
                return mid;
            else
                return peackBS(arr,st,mid-1);
        }
        if(arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1]){return mid;}
        if(arr[mid]>arr[mid-1]&&arr[mid]<arr[mid+1]){
            return peackBS(arr,mid+1,end);
        }
        else{
            return peackBS(arr,st,mid-1);
        }
    }
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        
        return peackBS(nums,0,n-1);
    }
};
