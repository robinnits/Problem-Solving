#include<iostream>
using namespace std;

int main() {
    int t;
    cin>> t;
    while(t!=0) {
        int n, count1=0;
        cin>>n;
        string s;
        cin>>s;
        for(int i = 0; i<n; i++) {
            if(s[i]=='1') count1++;
        }
        int count0= n- count1;
        cout<<((count0*(count1+1))+(count1*(count1-1)))<<'\n';
        t--;
    }
    return 0;
}