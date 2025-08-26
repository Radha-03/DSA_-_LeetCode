// You are given an integer n. We reorder the digits in any order (including the original order) such that the leading digit is not zero.
// Return true if and only if we can do this so that the resulting number is a power of two.

#include <iostream>
using namespace std;

bool reorderedPowerOf2(int n) {
        int input[] = countDigit(n);
        int power=1;
        for(int i=0;i<31;i++){
            int pArray[] = countDigit(power);
            if(match(input,pArray))
                return true;
            power<<1;
        }
        return false;
    }

public bool match(int[] a,int[] b) {
    for(int i=0;i<10;i++) {
        if(a[i]!=b[i]){
            return false;
        }
    }
    return true;
}

public int countDigit(int n){
    int digit[] = new digit[10];
    while(n>0) {
        digit[n%10]++;
        n/=10;
    }
    return digit;
}

int main() {

    int n;

    cout<<"Enter decimal number :";
    cin>>n;

    cout<<"Possible of power of after Re arrang :"<<reorderedPowerOf2(n);
    
}