#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        long long n; cin >> n;
        long long r = n%12;
        if(r == 0){
            cout <<0<<" " <<n <<"\n";
        } else if(r>= 1 && r<= 9){
            cout<<r << " "<<(n - r)<<"\n";
        } else if(r == 10){
            if(n >= 22) 
                cout<< 22<<" " <<(n - 22) << "\n";
            else
                cout<< -1 << "\n";
        } else {
            cout<< 11 << " "<<(n - 11) <<"\n";
        }
    }
    return 0;
}