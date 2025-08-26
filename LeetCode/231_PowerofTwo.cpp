// program of check power of two or not

#include <iostream>
using namespace std;

bool isPowerOfTwo(int no) {
        double n=no;
        if (n==0)
            return false;
        while(n==(int)n) {
            if(n==1)
                return true;
            n/=2;
        }
        return false;
    }

int main() {

    int n;

    cout<<"Enter decimal number :";
    cin>>n;

    cout<<"Power of Two :"<<isPowerOfTwo(n);
    
}