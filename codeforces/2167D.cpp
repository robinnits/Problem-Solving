#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--) {
        long long n; cin >>n;
        vector<long long> arr(n);
        for(int i =0; i<n; i++) {
            cin >> arr[i];
        }
        vector<long long> p = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53};
        long long ans = -1;
        for(long long i= 0; i<p.size(); i++) {
            int cnt = 0;
            for(long long j= 0; j<n; j++) {
                if((arr[j]%p[i] != 0)) {
                    cnt++;
                }
            }
            if(cnt>0) {
                ans = p[i];
                break;
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}