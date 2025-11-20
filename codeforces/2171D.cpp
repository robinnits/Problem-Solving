#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }
    vector<int> suffix_max(n);
    suffix_max[n - 1] = p[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        suffix_max[i] = max(suffix_max[i + 1], p[i]);
    }
    int prefix_min = p[0];
    for (int i = 0; i < n - 1; i++) {
        prefix_min = min(prefix_min, p[i]);
        if (prefix_min > suffix_max[i + 1]) {
            cout << "No" << endl;
            return;
        }
    }
    cout << "Yes" << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}