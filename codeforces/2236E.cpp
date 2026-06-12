#include<bits/stdc++.h>
using namespace std;

const int MAXN = 6005;
int min_R[MAXN][MAXN];
int max_L[MAXN][MAXN];
int last_seen[MAXN];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    for (int i = 0; i < MAXN; i++) {
        for (int j = 0; j < MAXN; j++) {
            min_R[i][j] = 1e9;
            max_L[i][j] = -1e9;
        }
    }
    
    int t; 
    if(cin >> t) {
        while( t-- ) {
            int n;
            cin >> n;
            vector<int> a(n);
            for (int i = 0; i < n; i++) {
                cin >> a[i];
            }
            int iter = 0;
            for (int i = 1; i <= n; i++) {
                last_seen[i] = 0;
            }
            for (int i = 0; i < n; i++) {
                iter++;
                int mn = a[i];
                int mx = a[i];
                for (int j = i; j < n; j++) {
                    if (last_seen[a[j]] == iter) break; 
                    last_seen[a[j]] = iter;
                    mn = min(mn, a[j]);
                    mx = max(mx, a[j]);
                    if (mx - mn == j - i) {
                        min_R[mn][mx] = min(min_R[mn][mx], j);
                        max_L[mn][mx] = max(max_L[mn][mx], i);
                    }
                }
            }
            int ans = 0;
            for (int L = n / 2; L >= 1; L--) {
                for (int z = 1; z + 2 * L - 1 <= n; z++) {
                    int mn1 = z, mx1 = z + L - 1; 
                    int mn2 = z + L, mx2 = z + 2 * L - 1;
                    if (min_R[mn1][mx1] != 1e9 && min_R[mn2][mx2] != 1e9) {
                        if (min_R[mn1][mx1] < max_L[mn2][mx2] || min_R[mn2][mx2] < max_L[mn1][mx1]) {
                            ans = L;
                            break;
                        }
                    }
                }
                if (ans > 0) break;
            }
            cout << ans << "\n";
            for (int i = 1; i <= n; i++) {
                for (int j = i; j <= n; j++) {
                    min_R[i][j] = 1e9;
                    max_L[i][j] = -1e9;
                }
            }
        }
    }
    return 0;
}