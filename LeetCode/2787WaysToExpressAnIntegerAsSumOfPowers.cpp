// Given two positive integers n and x.

// Return the number of ways n can be expressed as the sum of the xth power of unique positive integers, in other words, the number of sets of unique integers [n1, n2, ..., nk] where n = n1x + n2x + ... + nkx.

// Since the result can be very large, return it modulo 109 + 7.

// For example, if n = 160 and x = 3, one way to express n is n = 23 + 33 + 53.

#include <iostream>
using namespace std;

int M = 1e9+7;
int t[301][301];

int solve(int n, int num, int x) {
    if(n == 0)
        return 1;
    
    if(n < 0)
        return 0;
    
    int currPowerValue = pow(num, x);
    if(currPowerValue > n) {
        return 0;
    }

    if(t[n][num] != -1) {
        return t[n][num];
    }

    int take = solve(n-currPowerValue, num+1, x);
    int skip = solve(n, num+1, x);

    return t[n][num] = (take+skip)%M;
}
int numberOfWays(int n, int x) {
        return solve(n,1,x);
    }


int main() {

    int n,x;

    cout<<"Enter decimal number n :";
    cin>>n;

    cout<<"Enter decimal number x :";
    cin>>x;
    
    cout<<"Number of ways :"<<numberOfWays(n,x);
    
}