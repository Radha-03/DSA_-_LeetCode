class Solution {
public:
    bool check(long long mid,vector<long long> diff,int k,int r,int n){
        vector<long long> temp=diff;
        long long currSum=0;
        for(int i=0;i<n;i++){
            currSum+=temp[i];

            if(currSum<mid){
                long long need =mid-currSum;
                if(need>k)
                    return false;
                else{
                    k-=need;
                    currSum+=need;
                    if(i+r*2+1<n)
                        temp[i+r*2+1]-=need;
                }
            }
        }
        return true;
    }
    long long maxPower(vector<int>& stations, int r, int k) {
        int n=stations.size();
        vector<long long> diff(n+1,0);

        for(int i=0;i<n;i++){
            diff[max(0,i-r)]+=stations[i];
            if(i+r<n)
                diff[i+r+1]-=stations[i];
        }

        long long left = *min_element(diff.begin(), diff.end());
        long long right = accumulate(stations.begin(), stations.end(), 0LL) + k;

        long long result = 0;

        while(left<=right){
            long long mid = left+(right-left)/2;

            if(check(mid,diff,k,r,n)){
                result=mid;
                left=mid+1;
            }
            else{
                right=mid-1;
            }
        }
        return result;
    }
};
