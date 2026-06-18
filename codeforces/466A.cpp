#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m, a, b; cin >> n >> m >> a >> b;
    int ans = n*a;
    int temp = (n/m) * b;
    if(n%m != 0) {
        temp+=min(( (n%m) * a), b);
    }
    ans = min(ans, temp);
    cout<<ans<<'\n';
    return 0;
}