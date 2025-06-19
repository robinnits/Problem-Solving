#include<iostream>
using namespace std;

int main() {
    int k, l, m, n, d;
    cin>>k>>l>>m>>n>>d;
    int mn = (min(k, min(l, min(m,n))));
    int count = 0;
    for(int i =mn; i<=d; i++) {
        if(i%k ==0 || i%l==0 || i%m==0 || i%n==0) count++;
    }
    cout<<count<<'\n';
    return 0;
}