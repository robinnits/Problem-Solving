#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        long long a,b,x;cin >> a >> b >> x;
        vector<pair<long long,long long>> A,B;
        long long cnt=0;
        if(a == b){
            cout<<0<< '\n';
            continue;
        }
        while(true){
            A.push_back({a,cnt});
            if(a==0) break;
            a/=x;
            cnt++;
        }
        cnt=0;
        while(true){
            B.push_back({b,cnt});
            if(b==0) break;
            b/=x;
            cnt++;
        }
        long long ans = LLONG_MAX;
        for(auto p:A){
            for(auto q:B){
                long long val1 = p.first;
                long long op1 = p.second;
                long long val2 = q.first;
                long long op2 = q.second;
                ans = min(ans, op1 + op2 + abs(val1-val2));
            }
        }
        cout << ans << '\n';
    }
    return 0;
}