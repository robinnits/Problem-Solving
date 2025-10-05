#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--) {
        int n, k, x; cin>>n>>k>>x;
        if(x==1 && k==1) {
            cout<<"NO\n";
        }
        else if(x==1 && k==2) {
            if(n%2==0) {
                cout<<"YES\n";
                cout<<n/2<<'\n';
                for(int i= 0; i<n/2; i++) {
                    cout<<2<<" ";
                }
                cout<<'\n';
            }else{
                cout<<"NO\n";
            }
        }
        else if(x==2 && k==2){
            cout<<"YES\n";
            cout<<n<<'\n';
            for(int i= 0; i<n; i++) {
                cout<<1<<" ";
            }
            cout<<'\n';
        }
        else if(k>=3) {
            if(x!=1) {
                cout<<"YES\n";
                cout<<n<<'\n';
                for(int i= 0; i<n; i++) {
                    cout<<1<<" ";
                }
                cout<<'\n';
            }else {
                if(n%2==0) {
                    cout<<"YES\n";
                    cout<<n/2<<'\n';
                    for(int i= 0; i<n/2; i++) {
                        cout<<2<<" ";
                    }cout<<'\n';
                }else {
                    cout<<"YES\n";
                    cout<<(n/2-1)+1<<'\n';
                    for(int i= 0; i<(n/2-1); i++) {
                        cout<<2<<" ";
                    }cout<<3<<'\n';
                }
            }
        }
    }
    return 0;
}