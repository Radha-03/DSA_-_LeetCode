class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        long long sum=0;
        bool zero=false;
        int negative=0;
        int minabs=INT_MAX;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]<0){
                    negative++;
                }
                else if(matrix[i][j]==0)zero=true;

                minabs=min(minabs,abs(matrix[i][j]));
                sum+=abs(matrix[i][j]);
            }
        }
        if(zero || negative%2==0)return sum;
        else return sum-minabs*2;
    }
};
