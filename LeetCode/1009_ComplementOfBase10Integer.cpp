// The complement of an integer is the integer you get when you flip all the 0's to 1's and all the 1's to 0's in its binary representation.

// For example, The integer 5 is "101" in binary and its complement is "010" which is the integer 2.
// Given an integer n, return its complement.

// Given a positive integer n, there exists a 0-indexed array called powers, composed of the minimum number of powers of 2 that sum to n. The array is sorted in non-decreasing order, and there is only one way to form the array.

// You are also given a 0-indexed 2D integer array queries, where queries[i] = [lefti, righti]. Each queries[i] represents a query where you have to find the product of all powers[j] with lefti <= j <= righti.

// Return an array answers, equal in length to queries, where answers[i] is the answer to the ith query. Since the answer to the ith query may be too large, each answers[i] should be returned modulo 109 + 7.

// program of check power of two or not

#include <iostream>
using namespace std;

int bitwiseComplement(int num) {
       int mask=1;
       if(num==0) return 1;
       while(mask<num){
        mask=(mask<<1)+1;
       }
       return mask^num;
    }

int main() {

    int n;

    cout<<"Enter decimal number :";
    cin>>n;

    cout<<"compliment is :"<<bitwiseComplement(n);
    
}