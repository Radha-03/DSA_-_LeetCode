// program of check power of two or not

#include <iostream>
using namespace std;

bool isPowerOfTwo(int n) {
        
        if (n>0&&(n&n-1)==0)
            return true;
        return false;
    }

int main() {

    int n;

    cout<<"Enter decimal number :";
    cin>>n;

    cout<<"Power of Two :"<<isPowerOfTwo(n);
    
}