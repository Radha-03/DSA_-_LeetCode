class Solution {
public:
    int lengthOfLongestSubstring(string str) {
        int maxAns=0;
        unordered_set<char> s;
        int i=0,j=0;
        while(j<str.length()){
            if(s.find(str[j])!=s.end()){
                while(str[j]!=str[i]){
                    s.erase(str[i]);
                    i++;
                }
                i++;
            }
            else{
                s.insert(str[j]);
            }
            maxAns=max(maxAns,j-i+1);
            j++;
        }
        return maxAns;
    }
};
