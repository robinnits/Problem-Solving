#include<iostream>
using namespace std;

int main() {
    int k,n,w;
    cin>>k>>n>>w;
    int sum = 0;
    for(int i =0; i<=w; i++) {
        sum = sum + i*k;
    }
    int total = sum - n;
    if (total>=0)cout<<total<<'\n';
    else cout<<"0\n";
    return 0;
}