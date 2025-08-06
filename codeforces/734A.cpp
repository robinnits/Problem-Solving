#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int anton = 0, danik = 0;
    for(int i =0; i<n; i++) {
        if(s[i]=='A') anton++;
        else danik++;
    }
    if(anton>danik) cout<<"Anton\n";
    else if(anton<danik) cout<<"Danik\n";
    else cout<<"Friendship\n";
    return 0;
}