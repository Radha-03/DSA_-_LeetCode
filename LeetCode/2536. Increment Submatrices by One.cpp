class Solution {
public:
    vector<vector<int>> rangeAddQueries(int n, vector<vector<int>>& queries) {
        vector<vector<int>> mat(n,vector<int>(n,0));

        for(auto qr:queries){
            int trr=qr[0];
            int trc=qr[1];
            int blr=qr[2];
            int blc=qr[3];

            for(int i=trr;i<=blr;i++){
                mat[i][trc]+=1;
                if(blc<n-1)
                mat[i][blc+1]-=1;
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n-1;j++){
                mat[i][j+1]+=mat[i][j];
            }
        }
        return mat;
    }
};
