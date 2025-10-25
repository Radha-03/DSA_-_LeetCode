class Solution {
public:
    int totalMoney(int n) {
        int rem=n%7;
        int time=n/7;
        int sum=0,pre=0;
        for(int i=1;i<=time;i++){
            sum+=((((7+pre)*(8+pre))/2))-((pre*(pre+1))/2);
            pre++;
        }
        sum+=((((rem+pre)*(rem+pre+1))/2))-((pre*(pre+1))/2);

        return sum;
    }
};
