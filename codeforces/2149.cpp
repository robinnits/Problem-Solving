#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i = 0; i<n; i++) {
            cin>>arr[i];
        }
        int cnt = 0, cnt1 = 0;
        for(int i = 0; i<n; i++) {
            if(arr[i]==0){
                cnt++;
            }if(arr[i]==-1) {
                cnt1++;
            }
        }
        if(cnt1%2==0) {
            cout<<cnt<<'\n';
        }else {
            cout<<cnt+2<<'\n';
        }
    }
    return 0;
}