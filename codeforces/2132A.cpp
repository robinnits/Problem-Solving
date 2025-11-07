#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n, m;
        cin>>n;
        string a, b, c;
        cin>>a;
        cin>>m;
        cin>>b;
        cin>>c;
        list<char> ls;
        for(int i = 0; i<a.size(); i++) {
            ls.push_back(a[i]);
        }
        for(int i =0; i<b.size(); i++) {
            if(c[i]=='D') {
                ls.push_back(b[i]);
            }else {
                ls.push_front(b[i]);
            }
        }
        for (char ch : ls) {
            cout << ch;
        }
        cout<<'\n';
    }
    return 0;
}