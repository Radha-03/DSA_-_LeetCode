// Swape element alternet of given array

#include <iostream>
using namespace std;

void alternetSwap(int arr[],int n){
    for(int i=0;i<n-1;i=i+2) {
        swap(arr[i],arr[i+1]);
    }
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
}
int main() {
    int array[]={3,2,53,221,9};

    alternetSwap(array,5);
}