#include<bits/stdc++.h>
using namespace std;

bool palindrome(const string& s) {
    string rev_s = s;
    reverse(rev_s.begin(), rev_s.end());
    return s == rev_s;
}

bool ndcr(const string& p) {
    return is_sorted(p.begin(), p.end());
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        string s; cin >> s;
        bool found = false;

        for (int i = 0; i < (1 << n); ++i) {
            string p = "";
            string x = "";
            vector<int> indices;

            for (int j = 0; j < n; ++j) {
                if ((i >> j) & 1) {
                    p += s[j];
                    indices.push_back(j + 1);
                } else {
                    x += s[j];
                }
            }

            if (ndcr(p) && palindrome(x)) {
                cout << indices.size() << '\n';
                for (size_t j = 0; j < indices.size(); ++j) {
                    cout << indices[j] << (j == indices.size() - 1 ? "" : " ");
                }
                cout << '\n';
                found = true;
                break;
            }
        }
        if (!found) {
            cout << -1 << '\n';
        }
    }
    return 0;
}