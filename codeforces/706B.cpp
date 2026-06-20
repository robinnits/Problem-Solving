#include<bits/stdc++.h>
using namespace std;

int binary(vector<int> &x, long long target) {
    int low = 0;
    int high = x.size() -1;
    int ans =-1;
    while(low<=high) {
        int mid =(low + high) /2;
        if(x[mid] <= target) {
            ans = mid;
            low = mid + 1;
        }else high = mid -1;
    }
    return ans+1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    vector<int> x(n);
    for(int i=0; i<n; i++) cin >> x[i];
    int q; cin >> q;
    vector<long long> m(q);
    for(int i =0; i<q; i++) cin >> m[i];
    sort(x.begin(), x.end());
    for(int i = 0; i<q; i++) cout<<binary(x, m[i])<<'\n';
}