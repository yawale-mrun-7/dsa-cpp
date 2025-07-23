/*code to revese an array using extra memory space*/
#include<iostream>
using namespace std;
void reverseArray(int *arr, int n ) {
    int copy[n];
    for(int i=0; i<n; i++) {
        int j=n-i-1;
        copy[i]=arr[j];
    }
    for(int i=0; i<n; i++) {
        arr[i]=copy[i];
        cout<<arr[i]<<" ";
    }
}
int main() {
    int arr[]={5, 3, 9, 2, 3};
    int n=sizeof(arr)/sizeof(int);
    reverseArray(arr, n);
    return 0;
}