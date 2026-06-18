#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n, m, a; cin >> n >> m >> a;
    long long total = ((n+a-1)/a) * ((m+a-1)/a);
    cout<<total<<'\n';
    return 0;
}