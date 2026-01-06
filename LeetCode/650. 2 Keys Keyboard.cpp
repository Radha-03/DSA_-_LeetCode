//Optimal solution 

class Solution {
public:
    int minSteps(int n) {
        if(n == 1) return 0;
       int strLen = 1;
       int lastPaste = 0;
       int ops = 0;

        while(true) {
            if(n % strLen == 0) {
                ops += 2; // copy, paste
                lastPaste = strLen;
                strLen = strLen + strLen;
            }
            else {
                ops += 1; // paste
                strLen += lastPaste;
            }

            if(strLen == n) break;
        }

        return ops;
    }
};


