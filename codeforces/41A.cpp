#include<iostream>
using namespace std;

int main() {
    string s, t;
    cin>>s>>t;
    int size = s.length();
    if(s.length()!=t.length()) {
        cout<<"NO\n";
    }
    else {
        int count = 0;
        for(int i = 0; i<size; i++) {
            if(s[i]!=t[size-i-1]) count++;
        }
        if(count>0) cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}