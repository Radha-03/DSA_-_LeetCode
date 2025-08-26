//Find minimum and maximum number

#include <iostream>
using namespace std;

int main() {
    int List[]={4,24,56,3,67,0232,123,455};
    int size=8;
    int largest=INT32_MIN;
    int smallest=INT32_MAX;

    for(int i=0;i<size;i++) {
        largest=max(largest,List[i]);
        smallest=min(smallest,List[i]);
    }

    cout<<"Smallest :"<<smallest<<endl<<"Largest :"<<largest;
}