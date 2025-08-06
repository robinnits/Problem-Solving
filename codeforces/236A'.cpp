#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    string s;
    cin>>s;
    int n = s.length();
    sort(s.begin(), s.end());
    int minus = 0;
    for(int i = 0; i<n-1; i++) {
        if(s[i]==s[i+1]) minus++;
    }
    int total = n - minus;
    if(total%2==0) cout<<"CHAT WITH HER!\n";
    else cout<<"IGNORE HIM!\n";
    return 0;
}