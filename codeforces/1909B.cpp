#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<long long> arr(n);
        for(int i =0; i<n; i++) cin >> arr[i];

        long long ans = 1;
        set<long long> st;
        for(int i=1; i<63; i++) {
            ans*=2;
            st.clear();
            for(int j =0; j<n; j++) {
                st.insert(arr[j] % ans);
            }
            if(st.size() ==2) break;
        }

        cout<<ans<<'\n';
    }
    return 0;
}