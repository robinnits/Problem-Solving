#include<iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n,k;
        cin>>n>>k;
        int arr[n];
        int count=0;
        for (int i =0; i<n; i++) {
            cin>>arr[i];
            if(arr[i]==k) count++;
        }
        if(count>0) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}