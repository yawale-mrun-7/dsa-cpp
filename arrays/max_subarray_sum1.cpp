#include<iostream>
using namespace std;
void max_subarray(int *arr, int n) {

    for(int start=0; start<n; start++) {  //start of coloumn
        for(int end=start; end<n; end++) {  //start of row
            int sum=0; //sum must be initialised before a new subarray starts
            cout<<" { ";  //start of subarray
            for(int i=start; i<=end; i++) {
                sum+=arr[i];
                
            } //end of subarray
            cout<<sum<<" } ";
        }
        cout<<endl;
    }
}
int main() {
    int arr[]={2, -3, 6, -5, 4, 2};
    int n=sizeof(arr)/sizeof(int);
    max_subarray(arr, n);
    return 0;
}