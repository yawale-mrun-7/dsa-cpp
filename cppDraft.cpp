#include<iostream>
using namespace std;
int main() {
    int arr[5]={9, 5, 12, 3, 13};
    int n=sizeof(arr)/sizeof(int);
    int max=arr[0];
    for(int i=0; i<n; i++) {
        if(arr[i]>max) {
            max=arr[i];
        }
    }
    cout<<max<<endl;
    return 0;
}