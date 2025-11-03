class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int ans=0,sum=0,maxel=INT_MIN;
        for(int i=1;i<colors.length();i++){
            maxel=max(maxel,neededTime[i-1]);
            sum+=neededTime[i-1];
            if(colors[i]!=colors[i-1]){
                ans+=sum-maxel;
                maxel=INT_MIN;
                sum=0;
            }
            else if(i==colors.length()-1){
                maxel=max(maxel,neededTime[i]);
                sum+=neededTime[i];
                ans+=sum-maxel;
                maxel=INT_MIN;
                sum=0;
            }
        }
        return ans;
    }
};
