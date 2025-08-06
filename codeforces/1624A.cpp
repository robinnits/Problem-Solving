#include<iostream>
#include<algorithm>
using namespace std;

int main () {
    int t;
    cin>> t;
    do {
        int n;
        cin>>n;
        int x[n];
        for(int i= 0; i<n; i++) {
            cin>> x[i];
        }
        sort(x, x+n);
        cout<<x[n-1]-x[0]<<'\n';
        t--;
    }while(t!=0);
    return 0;
}