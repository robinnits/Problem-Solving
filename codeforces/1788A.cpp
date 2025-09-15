#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> arr(n);
        int cnt2 = 0;
        vector<int> idx;
        for(int i = 0; i<n; i++) {
            cin>>arr[i];
            if(arr[i]==2) {
                cnt2++;
                idx.push_back(i);
            }
        }
        if(cnt2==0) cout<<1<<'\n';
        else if(cnt2%2==0) {
            cout<<idx[(cnt2/2)-1]+1<<'\n';
        }else cout<<-1<<'\n';
    }
    return 0;
}