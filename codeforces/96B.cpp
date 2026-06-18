#include<bits/stdc++.h>
using namespace std;

vector<long long> v;

int digit(long long n) {
    if(n == 0) return 1;
    int i = 0;
    while(n!=0) {
        n/=10;
        i++;
    }
    return i;
}

void solve(int d, int four, int seven, long long result){
    if(digit(result)>d) return;
    if(digit(result) == d && four == seven) v.push_back(result);
    solve(d, four+1, seven, result*10 +4);
    solve(d, four, seven+1, result*10 + 7);
}

long long odd(int d) {
    long long no = 0;
    int size = d/2 +1;
    for(int i =0; i<size;i++) no = no*10 + 4;
    for(int i=0; i<size; i++) no = no*10 +7;
    return no;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n; cin >> n;
    int d = digit(n);
    long long no =0;
    if(d%2 !=0) {
        no = odd(d);
    }else{
        solve(d, 0, 0, 0);
        sort(v.begin(), v.end());
        for(int i =0; i<v.size(); i++) {
            if(v[i]>=n) {
                no = v[i];
                break;
            }
        }
        if(no == 0) no = odd(d);
    }
    cout<<no<<'\n';
    return 0;
}