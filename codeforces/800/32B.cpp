#include<iostream>
using namespace std;

int main() {
    string b, s;
    cin>>b;
    int size = b.length();
    int i = 0;
    while(i<size) {
        if(b[i]=='-') {
            if(b[i+1]=='-') {
            s = s+'2';
            i+=2;
            } else {
                s = s+'1';
                i+=2;
            }
        } else {
            s = s+'0';
            i++;
        }
    }
    cout<<s<<'\n';
    return 0;
}