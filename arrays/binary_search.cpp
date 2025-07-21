#include<iostream>
using namespace std;
int binSearch(int *arr, int n, int key) {
int st=0, end=n-1;
while(st<=end) {
    int mid=(st+end)/2;
    if(arr[mid]==key) {
        return mid;
    }
    else if(arr[mid]<key) {  //second half
        st=mid+1;
    }
    else {  //first half
        end=mid-1;
    }
}
return -1;
}
int main() {
    int arr[]={2,4, 6, 7, 9, 12, 17, 19};
    int n=sizeof(arr)/sizeof(int);
    cout<<binSearch(arr, n, 12)<<endl;
    return 0;
}