#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int x = 0;
    while(n!=0) {
        string s;
        cin>>s;
        if(s[0]=='-' && s[1]=='-') --x;
        else if(s[0]=='+' && s[1]=='+') ++x;
        else if(s[2]=='-' && s[1]=='-') x--;
        else if(s[2]=='+' && s[1]=='+') x++;
        n--;
    }
    cout<<x<<'\n';
    return 0;
}