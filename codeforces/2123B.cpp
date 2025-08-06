#include<iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n, j, k;
        cin>>n>>j>>k;
        int arr[n];
        for(int i = 0; i<n; i++) {
            cin>>arr[i];
        }
        int count = 0;
        for(int i = 0; i<n; i++) {
            if(arr[i]>arr[j-1]) {
                count++;
            }
        }
        if(count<=k) {
            cout<<"YES\n";
        } else {
            cout<<"NO\n";
        }
    }
    return 0;
}