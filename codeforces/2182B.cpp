#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; 
    cin >> t;
    while(t--) {
        long long a, b;
        cin >> a >> b;
        long long sum = 1;
        long long cnt = 0;
        {
            long long x = a, y = b;
            sum = 1;
            cnt = 0;
            int i = 0;
            while (true) {
                if (i % 2 == 0) {
                    if (y < sum) break;
                    y -= sum;
                } else {
                    if (x < sum) break;
                    x -= sum;
                }
                cnt++;
                sum *= 2;
                i++;
            }
        }
        long long cnt2 = 0;
        {
            long long x = a, y = b;
            sum = 1;
            cnt2 = 0;
            int i = 0;
            while (true) {
                if (i % 2 == 0) {
                    if (x < sum) break;
                    x -= sum;
                } else {
                    if (y < sum) break;
                    y -= sum;
                }
                cnt2++;
                sum *= 2;
                i++;
            }
        }
        cout << max(cnt, cnt2) << '\n';
    }
    return 0;
}