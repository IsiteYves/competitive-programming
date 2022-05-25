#include<iostream>
using namespace std;

int searchEl(int *arr, int n, int k) {
    int i;
    for (i=0;i<n;i++)
    if(arr[i] == k)
    return i;
    return -1;
}

int main() {
    int arr[100], t, i, n;
    cin>>t;
    while(t--) {
        int k=0;
        cin>>n;
        for(i=0;i<n;i++)
        cin>>arr[i];
        cout<<"Enter search key: ";
        cin>>k;
        cout<<searchEl(arr,n,k);
    }
}