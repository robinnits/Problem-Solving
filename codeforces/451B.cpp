#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    vector<long long> arr(n);
    for(int i = 0; i<n; i++) cin >> arr[i];
    int l = 0, r = 0;
    for(int i = 0; i<n-1; i++) {
        if(i-1<0 && arr[i]>arr[i+1]){
            l = i;
            break;
        }else if( arr[i] > arr[i-1] && arr[i] >arr[i+1]) {
            l = i;
            break;
        }
    }
    for(int i= 1; i< n; i++) {
        if(arr[i-1]>arr[i] && i+1>=n) {
            r = i;
            break;
        }
        else if(arr[i-1]>arr[i] && arr[i]<arr[i+1]) {
            r = i;
            break;
        }
    }
    bool found = false;
    if(r+1<n) {
        reverse(arr.begin()+l, arr.begin()+r+1);
    }else reverse(arr.begin()+l, arr.end());
    if(is_sorted(arr.begin(), arr.end())) found = true;
    if(found) {
        cout<<"yes\n";
        cout<<l+1<<' '<<r+1<<'\n';
    }else cout<<"no\n";
}