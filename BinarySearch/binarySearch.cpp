#include <iostream>
using namespace std;

int BinarySearch(int arr[],int size,int key) {
    int start=0,end=size-1;
    int mid=start+(end-start)/2;
    while(start<=end) {
        if(arr[mid]==key)
            return mid;
        if(arr[mid]>key)
            end=mid-1;
        else   
            start=mid+1;
        mid=start+(end-start)/2;
    }
    return -1;
}

int main() {
    int arr[]={1,3,5,7,9,12};
    cout<<"9 is idex of "<<BinarySearch(arr,6,90);
    return 0;
}