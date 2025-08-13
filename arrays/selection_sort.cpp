#include<iostream>
using namespace std;
void display(int *arr, int n) {
    cout<<"{ ";
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<"}";
}
void selectionSort(int *arr, int n) {  
    for(int i=0; i<n-1; i++) {  //no. of turns  
        int mididx=i; 
        for(int j=i+1; j<n; j++) {  //comparison loop
            if(arr[j]<arr[mididx]) {
                mididx=j;  //assign minimum element index to mididx
            }
        }  //turn end
        swap(arr[i], arr[mididx]);
        cout<<"iteration "<<i+1<<" ";
        display(arr, n);
        cout<<endl;
    }
    cout<<"Sorted Array: "; 
    display(arr, n); 
}
int main() {
    int arr[]={5, 4, 1, 3, 2};
    int n=sizeof(arr)/sizeof(int);
    selectionSort(arr, n);
    return 0;
}