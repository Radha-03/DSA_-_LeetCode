class Solution {
public:
    int strStr(string haystack, string needle) {
        int i=0;
        while(haystack[i]!='\0'){
            if(haystack[i]==needle[0]){
                int j=0;
                while(needle[j]!='\0'&& needle[j]==haystack[i+j]){
                    j++;
                }
                if(needle[j]=='\0')return i;
            }
            i++;
        }
        return -1;
    }
};
