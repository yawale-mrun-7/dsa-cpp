#include<iostream>
using namespace std;
void display(int *arr, int n) {
    cout<<"{ ";
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<"}";
}

void bubbleSort(int *arr, int n) {
    for(int i=0; i<n-1; i++) {  //for no. of turns
        for(int j=0; j<n-i-1; j++) { //swapping and traversing in each turn 
            if( arr[j] > arr[j+1] ) {
                swap( arr[j], arr[j+1]);
            }
        }
        display(arr, n);
        cout<<" iteration"<<i+1<<endl; //displaying each iteration
    }  //turn end
    cout<<"final sorted array: ";
    display(arr, n);
}

int main() {
    int arr[]={5, 4, 1, 3, 2};
    int n=sizeof(arr)/sizeof(int);
    bubbleSort(arr, n);
    return 0;
}