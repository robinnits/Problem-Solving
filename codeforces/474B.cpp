#include<bits/stdc++.h>
using namespace std;

int binary(vector<int> &pre, int target){
    int low = 0, high = pre.size() -1, ans = -1;

    while(low<=high) {
        int mid = (low+high) /2;
        if(pre[mid] >= target) {
            ans = mid;
            high = mid -1;
        }else low = mid + 1;
    }
    
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++) cin >> arr[i];

    int m; cin >> m;
    vector<int> q(m);
    for(int i=0; i<m; i++) cin >> q[i];
    
    vector<int> pre(n);
    pre[0] = arr[0];
    for(int i =1; i<n; i++) pre[i] = pre[i-1] + arr[i];

    for(int i = 0; i<m; i++) {
        cout<<binary(pre, q[i]) + 1<<'\n';
    }
    
    return 0;
}