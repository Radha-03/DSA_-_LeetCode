class Solution {
public:
    void dfsOnislands(vector<vector<char>>& grid,int i,int j,int m,int n){
        if(i+1<m){
            if(grid[i+1][j]!='0'){
                grid[i+1][j]='0';
                dfsOnislands(grid,i+1,j,m,n);
            }
        }
        if(j+1<n){
            if(grid[i][j+1]!='0'){
                grid[i][j+1]='0';
                dfsOnislands(grid,i,j+1,m,n);
            }
        }
        if(i-1>=0){
            if(grid[i-1][j]!='0'){
                grid[i-1][j]='0';
                dfsOnislands(grid,i-1,j,m,n);
            }
        }
        if(j-1>=0){
            if(grid[i][j-1]!='0'){
                grid[i][j-1]='0';
                dfsOnislands(grid,i,j-1,m,n);
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int islands=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]=='0')continue;
                else{
                    islands++;
                    dfsOnislands(grid,i,j,m,n);
                }
            }
        }
        return islands;
    }
};
