// You are given an integer array nums. In one operation, you can add or subtract 1 from any element of nums.

// Return the minimum number of operations to make all elements of nums divisible by 3.

// my solution

// in between two divisble by 3 nuble only two none divisble by 3 nuble exist so in array found the non divisble number then we need 
// to only minimum one opetion for make divisble, it either subtrect or addition. so in method i travel whole array and cound number of 
// non duvisible by 3 number then return them becurse it's also same as minumum number requred for the mak whole array to divisible by 3
 

class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int n=nums.size();
        int cnt=0;
        for(int i=0;i<n;i++)
            if(nums[i]%3!=0)cnt++;
        return cnt;
    }
};
