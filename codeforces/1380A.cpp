#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while( t --){
        int n; cin >> n;
        vector<int> arr(n);
        for(int i =0; i<n;i ++) {
            cin >> arr[i];
        }
        bool found1 = false, found2 = false, found = false;
        int idx1, idx2;
        for(int i = 1; i<n-1; i++) {
            for(int j= i-1; j>=0; j--) {
                if(arr[j]<arr[i]) {
                    idx1 = j+1;
                    found1 = true;
                }
            }
            for(int k= i+1; k<n; k++) {
                if(arr[k]<arr[i]) {
                    idx2 = k+1;
                    found2 = true;
                }
            }
            if(found1 && found2) {
                cout<<"YES\n";
                cout<<idx1<<' '<<i+1<<' '<<idx2<<'\n';
                found = true;
                break; 
            }else{
                found1 = false;
                found2 = false;
            }
        }
        if(!found) {
            cout<<"NO\n";
        }
    }
    return 0;
}