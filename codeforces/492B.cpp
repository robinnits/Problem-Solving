#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    double n; cin >> n; 
    double l; cin >> l;
    vector<double> arr(n);
    for(int i= 0; i< n; i++) cin>>arr[i];
    sort(arr.begin(), arr.end());
    double diff = max(arr[0], l-arr[n-1]);
    for(int i =1; i<n; i++) diff = max(diff, (arr[i]-arr[i-1])/2);
    cout<<fixed<<setprecision(10)<<diff<<'\n';
    return 0;
}