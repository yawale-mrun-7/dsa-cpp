#include<iostream>
using namespace std;
// void swap(int *arr, int start, int end) {
//     int temp=arr[start]; 
//     arr[start]=arr[end];
//     arr[end]=temp;
// }
void printArr(int *arr, int n) {
    for(int i=0; i<n; i++) {
        cout<<arr[i];
    }
}
int main() {
    int arr[]={2, 4, 9, 6, 3};
    int n=sizeof(arr)/sizeof(int);
    int start=0; 
    int end=n-1;
    while(start<end) {
        // swap(arr, start, end);
        swap(arr[start], arr[end]);  //instead of making an entire new swap function we can use the inbuilt swap function in c++ as mentioned
        start++;
        end--;
    }
    printArr(arr, n);
    return 0;
}