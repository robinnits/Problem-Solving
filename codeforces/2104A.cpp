#include<iostream>
using namespace std;

int main() {
    int t;
    cin>> t;
    do {
        int a, b, c;
        cin>>a>>b>>c;
        int x = (2*c-a-b)/3;
        int n = (a-2*b+c)/3;
        if(x<0 || n<0) cout<<"NO\n";
        else {
            if(a+x-n==b+n && b+n==c-x) cout<<"YES\n";
            else cout<<"NO\n";
        }
        t--;
    }while(t!=0);
    return 0;
}