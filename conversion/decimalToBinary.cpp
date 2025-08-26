// program of convert decimal to binary

#include <iostream>
using namespace std;

long long int decimalToBinary(int n) {
    int rem,Binary=0,tempMulti=1;
    while(n!=0) {
        rem=n%2;
        n/=2;
        Binary+=tempMulti*rem;
        tempMulti*=10;
    }
    return Binary;
}

int main() {

    int n;

    cout<<"Enter decimal number :";
    cin>>n;

    cout<<"Binary number is :"<<decimalToBinary(n);
    
}