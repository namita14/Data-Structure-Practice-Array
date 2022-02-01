#include<bits/stdc++.h>
using namespace std;

int getMinDiff(int arr[], int n, int k) {
        sort(arr,arr+n);
        int ans = arr[n-1] - arr[0];
        
        int smallest = arr[0]+k;
        int largest = arr[n-1]-k;
        int mi,ma;
        
        for(int i=0;i<n-1;i++){
            mi = min(smallest, arr[i+1]-k);
            ma = max(largest, arr[i]+k);
            if(mi<0) continue;
            ans = min(ans,ma-mi);
        }
        return ans;
    }

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    getMinDiff(arr, n, k);
    return 0;
}

    