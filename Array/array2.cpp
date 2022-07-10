#include<iostream>
#include<climits>

using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int MaxNo = INT_MIN;
    int MinNo = INT_MAX;

    for(int i=0; i<n; i++){
        if(arr[i]>MaxNo){
            MaxNo = arr[i];
        }
        if(arr[i]<MinNo){
            MinNo = arr[i];
        }
    }
    return 0;
}