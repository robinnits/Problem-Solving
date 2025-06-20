#include<iostream>
using namespace std;

int main() {
    string s1, s2, s3;
    cin>>s1>>s2;
    int size = s1.length();
    for(int i = 0; i<size; i++) {
        if(s1[i]==s2[i]) {
            s3 = s3 + '0';
        } else {
            s3 = s3 + '1';
        }
    }
    cout<<s3<<'\n';
    return 0;
}