#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--) {
        int l, a, b; cin >> l>>a>>b;
        vector<int> arr;
        bool check = true;
        unordered_map<int, int> mp;
        int i = a;
        while(check) {
            if(mp[i]==1) {
                check = false;
            }else{
                mp[i]++;
                arr.push_back(i);
            }
            i = (i+b)%l;
        }
        sort(arr.begin(), arr.end());
        cout<<arr[arr.size()-1]<<'\n';
    }
    return 0;
}