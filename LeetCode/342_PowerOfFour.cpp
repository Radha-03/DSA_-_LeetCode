// Given an integer n, return true if it is a power of four. Otherwise, return false.

// An integer n is a power of four, if there exists an integer x such that n == 4x.

#include <iostream>
using namespace std;

bool isPowerOfFour(int n) {
        if ((n==0||n<=INT_MIN))
            return false;
          int count=0;
        if((n&(n-1))==0){
            cout<<n;
            while(n!=1){
                cout<<n;
                n=n>>1;
                count++;
            }
            if(count%2==0){
                return true;
            }
        }
        return false;
    }

int main() {

    // int n;

    cout<<"Enter decimal number :";
    // cin>>n;

    cout<<"Power of Four :"<<isPowerOfFour(0);
    
}