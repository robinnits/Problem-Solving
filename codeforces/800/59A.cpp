#include<iostream>
using namespace std;

int main() {
    string s;
    cin>>s;
    int size = s.length();
    int lower=0, upper=0;
    for(int i = 0; i<size; i++) {
        if(s[i]>91) lower++;
        else upper++;
    }
    if(lower>upper) {
        for(int i = 0; i<size; i++) {
            s[i]= tolower(s[i]);
        }
    } else if (lower == upper) {
        for(int i = 0; i<size; i++) {
            s[i]= tolower(s[i]);
        }
    }
    else for(int i = 0; i<size; i++) {
        s[i] = toupper(s[i]);
    }
    cout<<s<<'\n';
    return 0;
}