#include<iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t!=0) {
        string s = "codeforces";
        string s1;
        cin>>s1;
        int size = s1.length();
        int count = 0;
        for(int i = 0; i<size; i++) {
            if(s[i]!=s1[i]) count++;
        }
        cout<<count<<'\n';
        t--;
    }
    return 0;
}