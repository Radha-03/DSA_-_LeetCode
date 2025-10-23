class Solution {
public:
    bool check(string s){
        if(s.length()<=2){
            if(s[0]==s[1])return true;
            else return false;
        }
        
        for(int i=0;i<s.length()-1;i++){
            s[i]=(((s[i]-'0')+(s[i+1]-'0'))%10)+'0';
        }
        s.pop_back();
        return check(s);
    }
    bool hasSameDigits(string s) {
        return check(s);
    }
};
