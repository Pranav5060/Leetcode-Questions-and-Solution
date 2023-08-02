//{ Driver Code Starts

#include <bits/stdc++.h>

using namespace std;

pair<int, int> getFloorAndCeil(int arr[], int n, int x);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        auto ans = getFloorAndCeil(arr, n, x);
        cout << ans.first << " " << ans.second << "\n";
    }
    return 0;
}

// } Driver Code Ends


pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
    // code here
    int f=INT_MIN;
    int c=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            return {x,x};
        }
        if(arr[i]<x){
            f=max(f,arr[i]);
        }
        if(arr[i]>x){
            c=min(c,arr[i]);
        }
    }
    if(f==INT_MIN){
        return {-1,c};
    }
    if(c==INT_MAX){
        return {f,-1};
    }
    
    return {f,c};
    
}