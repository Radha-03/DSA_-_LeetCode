class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> set;
        for(int num:nums) set.insert(num);

        int longest=0;

        for(int el:set){
            if(set.find(el-1)==set.end()){
                int x=el;
                int countSeq=1;

                while(set.find(++x)!=set.end()){
                    countSeq++;
                }
                longest=max(longest,countSeq);
            }
        }
        return longest;
    }
};
