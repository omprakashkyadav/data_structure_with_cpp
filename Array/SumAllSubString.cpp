// Given an array a[] of size n, output sum of each subarray of the given array

#include"bits/stdc++.h"
using namespace std;

int main(){
    int n;
    cin>>n;

    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int curr = 0;
    for(int i=0; i<n; i++){
        curr = 0;
        for(int j=i; j<n; j++){
            curr += a[j];
            //cout<<a[j] <<endl;
            cout<<curr<<endl;
        }
    }
    return 0;
}