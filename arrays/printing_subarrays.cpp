#include<iostream>
using namespace std;
void printSubarrays(int *arr, int n) {
     for(int start=0; start<n; start++) {  //for starting index
        for(int end=start; end<n; end++) {  //for ending index
            for(int i=start; i<=end; i++) {  //for one subarray
                cout<<arr[i];
            }
            cout<<" ";
        }
        cout<<endl;
    }
}
int main() {
    int arr[]={1, 2, 3, 4, 5};
    int n=sizeof(arr)/sizeof(int);
    int start=arr[0];
    printSubarrays(arr, n);
   return 0;
}