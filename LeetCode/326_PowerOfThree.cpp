// Given an integer n, return true if it is a power of three. Otherwise, return false.

// An integer n is a power of three, if there exists an integer x such that n == 3x.

// program of check power of two or not

#include <iostream>
using namespace std;

bool isPowerOfThree(int n) {
        int maxPowerOf3 = 1162261467;
        return n > 0 && maxPowerOf3 % n == 0;
    }
int main() {

    int n;

    cout<<"Enter decimal number :";
    cin>>n;

    cout<<"Power of Three :"<<isPowerOfThree(n);
    
}