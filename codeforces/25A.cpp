#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    vector<int> arr(n);
    for(int i= 0; i< n; i++) cin >> arr[i];
    int even = 0, odd = 0, even_curr = -1, odd_curr = -1;
    for(int i =0; i<n; i++) {
        if(arr[i] %2 ==0) {even++; even_curr = i;}
        else if(arr[i] %2 != 0) {odd++; odd_curr = i;}
        if((even>1 && odd == 1) || (odd>1 && even ==1)) break; 
    }
    if(even>1) cout<<odd_curr+1<<'\n';
    else if(odd>1) cout<<even_curr+1<<'\n';
    return 0;
}