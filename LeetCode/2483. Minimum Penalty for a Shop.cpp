class Solution {
public:
    int bestClosingTime(string customers) {
        int n=customers.length(); // size of string
        int minPanalty=INT_MAX; // maintain minmum panalty
        int afterClose=count(customers.begin(),customers.end(),'Y'); // count number of for after close
        int OpenPenalty=0;
        int closeHour=0;
        for(int i=0;i<=n;i++){ // find 0 to n hour for minimum panalty
            int panalty=afterClose+OpenPenalty;
            if(minPanalty>panalty){
                closeHour=i;
                minPanalty=panalty;
            }
            if(i<n)
                OpenPenalty+=customers[i]=='N'?1:-1;
        }
        return closeHour;
    }
};
