#include<iostream>
using namespace std;

int main () {
    string s;
    cin>>s;
    int lngth = s.length();
    char temp;
    while((lngth/2)+1!=0) {
        for(int i = 0; i<lngth-2; i+=2) {
            if(s[i]>s[i+2]) {
                temp = s[i];
                s[i] = s[i+2];
                s[i+2] = temp;            
            }
        }
        lngth--;
    }
    cout<<s<<'\n';
    return 0;
}