#include<iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t!=0) {
        string a, b;
        cin>>b;
        int n = b.length();
        for(int i =0; i<n; i+=2) {
            a = a + b[i];
        }
        a = a + b[n-1];
        cout<<a<<'\n';
        t--;
    }
    return 0;
}