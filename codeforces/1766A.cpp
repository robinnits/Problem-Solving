#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        if(n<10) {
            cout<<n<<'\n';
        } 
        else{
            int temp = n;
            string s = to_string(temp);
            int dgt = s.length();
            cout<<(9*(dgt-1)+(n/(int)pow(10, dgt-1)))<<'\n';
        }
    }
    return 0;
}