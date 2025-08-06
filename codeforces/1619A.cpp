#include<iostream>
using namespace std;

int main () {
    int t;
    cin>>t;
    while(t!=0) {
        string s;
        cin>>s;
        int size = s.length();
        int count = 0;
        if(size%2!=0) cout<<"NO\n";
        else {
            for(int i = 0; i<(size/2); i++) {
                if(s[i]==s[(size/2)+i]) {
                    count++;
                }
            }
            if(count==size/2) cout<<"YES\n";
            else cout<<"NO\n";
        }
        t--;
    }
    return 0;
}