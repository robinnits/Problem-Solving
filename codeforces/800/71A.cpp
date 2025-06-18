#include<iostream>
using namespace std;

int main () {
    int n;
    cin>>n;
    while(n!=0) {
        string s;
        cin>>s;
        int lnght = s.length();
        if(lnght>10) {
            cout<<s[0]<<lnght-2<<s[lnght-1]<<'\n';
        }
        else cout<<s<<'\n';
        n--;
    }
    return 0;
}