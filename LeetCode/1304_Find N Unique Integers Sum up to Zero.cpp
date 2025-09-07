class Solution {
public:
    vector<int> sumZero(int n) {
        int count=n%2==0?1:0;
        vector<int> ans;
        for(int i=0;i<n;i++){
            ans.push_back(count);
            if(count*-1<0){
                count*=-1;
            }
            else{
                count=(count*-1)+1;
            }
        }
        return ans;
    }
}; 
