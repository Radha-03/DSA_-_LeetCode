// Given a positive integer n, there exists a 0-indexed array called powers, composed of the minimum number of powers of 2 that sum to n. The array is sorted in non-decreasing order, and there is only one way to form the array.

// You are also given a 0-indexed 2D integer array queries, where queries[i] = [lefti, righti]. Each queries[i] represents a query where you have to find the product of all powers[j] with lefti <= j <= righti.

// Return an array answers, equal in length to queries, where answers[i] is the answer to the ith query. Since the answer to the ith query may be too large, each answers[i] should be returned modulo 109 + 7.

// program of check power of two or not

#include <iostream>
using namespace std;

int M = 1e9+7;

vector<int> productQueries(int n, vector<vector<int>>& queries) {
        vector<int> powers;
        vector<int> result;

        //Build powers array
        for(int i = 0; i < 32; i++) {
            if((n & (1 << i)) != 0) { //ith bit is set
                powers.push_back(1 << i);
            }
        }

        for(auto &query : queries) {
            int start = query[0];
            int end = query[1];

            long product = 1;
            for(int i = start; i <= end; i++) {
                product = (product * powers[i]) % M;
            }

            result.push_back(product);
        }

        return result;

    }


int main() {

    int n;

    cout<<"Enter decimal number :";
    cin>>n;

    cout<<"Power of Two :"<<isPowerOfTwo(n,[(1,3),(3,4)]);
    
}