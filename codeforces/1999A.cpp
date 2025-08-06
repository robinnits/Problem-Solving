#include<iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int rem1, rem2;
        rem1 = n%10;
        n = n/10;
        rem2 = n%10;
        cout<<rem1+rem2<<'\n';
    }
    return 0;
}