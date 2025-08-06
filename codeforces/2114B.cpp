#include<iostream>
using namespace std;

int main() {
    int t;
    cin>> t;
    while(t!=0) {
        int n, k;
        cin>> n>> k;
        string s;
        cin>> s;
        int count1 = 0, count0 =0;
        for(int i = 0; i < n; i++) {
            if(s[i]=='1') count1++;
            else count0++;
        }
        int countmax = count1/2 + count0/2;
        int countmin = max(count1,count0) - n/2;
        if(countmin<=k && (k-countmin)%2==0 && k<=countmax) cout<<"YES\n";
        else cout<<"NO\n";
        t--;
    }
    return 0;
}