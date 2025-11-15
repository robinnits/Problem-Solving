#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        int cnt = 0, cnt1 = 0, cnt2 = 0, cnt3 =0;
        for(int i = 0; i<s.length()-1 ; i++) {
            if((s[i]=='>' && s[i+1]=='*')
            || (s[i]=='*' && s[i+1]=='<')
            || (s[i]=='*' && s[i+1]=='*')
            || (s[i]=='>' && s[i+1]=='<')) {
                cnt++;
            }
        }
        for(int i = 0; i<s.length(); i++) {
            if(s[i]=='<') cnt1++;
            else if(s[i] == '>') cnt2++;
            else if(s[i]== '*')cnt3++;
        }
        if(s.length()==1) {
            cout<<1<<'\n';
        }
        else if(cnt>0) {
            cout<<-1<<'\n';
        }else{
            cout<<max(cnt1+cnt3, cnt2+cnt3);
            cout<<'\n';
        }
    }
    return 0;
}