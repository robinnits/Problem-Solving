#include<iostream>
using namespace std;

int main() {
    int n,t;
    cin>>n>>t;
    string s;
    cin>>s;
    char temp;
    for(int i = t; i!=0; i--) {
        int j = 0;
        while(j <n) {
            if(s[j]=='B' && s[j+1]=='G') {
                temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
                j+=2;
            }
            else j++;
        }
    }
    cout<<s<<'\n';
    return 0;
}