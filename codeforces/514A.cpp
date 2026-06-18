#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long x; cin >> x;
    vector<int> arr;
    while(x != 0) {
        int temp = x %10;
        arr.push_back(min(temp, 9-temp));
        x/=10;
    }
    if(arr[arr.size()-1] == 0) arr[arr.size()-1] = 9;
    for(int i = arr.size()-1; i>=0; i--) {
        x = x*10+arr[i];
    }
    cout<<x<<'\n';
    return 0;
}