#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--) {
        int n, p; cin >> n >> p;
        vector<int> a(n), b(n);
        for(int i =0; i<n; i++) cin >> a[i];
        for(int i=0; i<n; i++) cin >> b[i];
        vector<pair<int, int>> arr;
        for(int i =0; i<n; i++) arr.push_back({b[i], a[i]});
        sort(arr.begin(), arr.end());
        long long cost = p, cmp = 1;
        int i =0;
        while(i<n && arr[i].first < p && cmp<n) {
            int rem = n- cmp;
            if(arr[i].second<= rem) {
                cost+=1LL*(arr[i].second*arr[i].first);
                cmp+=arr[i].second;
            }else{
                cost+=1LL*rem*arr[i].first;
                cmp+=rem;
            }
            i++;
        }
        if(cmp<n) {
            cost+=(1LL*p*(n-cmp));
        }
        cout<<cost<<'\n';
    }
    return 0;
}