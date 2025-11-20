// in this proble i alpply sort on 2d array base on second elemant in accending order.then after apply gridi method find the overlaping 
// and count according them

class Solution {
public:
    static int intersectionSizeTwo(vector<vector<int>>& I) {
        sort(I.begin(), I.end(), [](vector<int>& X, vector<int>& Y){ 
            const int x0=X[0], x1=X[1], y0=Y[0], y1=Y[1]; 
            return (x1==y1)?x0>y0:x1<y1; 
        });

        int cnt=2, n=I.size();
        int b=I[0][1], a=b-1;
        for (int i=1; i<n; i++) {
            const int l=I[i][0], r=I[i][1];
            if (a>=l) continue;
            if(b>=l){
                cnt+=1;
                a = b;
                b = r;
            }
            else if(b<l){
                cnt+=2;
                b=r;
                a=r-1;
            }
        }
        return cnt;
    }
};

