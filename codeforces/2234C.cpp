#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<long long> h(n);
        for(int k = 0; k < n; k++) cin>>h[k];
        for(int i = 0; i < n; i++){
            vector<long long> L(n, 0), R(n, 0);
            long long cur = 0;
            for(int d= 1;d <n; d++){
                cur = max(cur, h[(i+d-1)%n]);
                L[(i+d)% n]= cur;
            }
            cur = 0;
            for(int d= 1; d< n;d++){
                cur =max(cur, h[(i-d+n)%n]);
                R[(i-d+n)%n] = cur;
            }

            long long sum = 0;
            for(int j= 0; j<n; j++)
                if(j!=i) sum+=min(L[j], R[j]);

            cout<< sum<<" ";
        }
        cout<<"\n";
    }
    return 0;
}