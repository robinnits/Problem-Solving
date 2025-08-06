#include<iostream>
using namespace std;

int main () {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int i = 0;
        int count = 0;
        string s;
        cin>>s;
        while(s[i]!=s[n-i-1]) {
            count++;
            i++;
            if(s[i]==s[n-i-1]) break;
        }
        int total = n-2*count;
        if(total<=0) cout<<"0\n";
        else cout<<total<<'\n';
    }
    return 0;
}