#include<iostream>
using namespace std;

int gcdf(int i, int j);

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int gcd;
        int final = 0;
        for(int i =1; i<n; i++) {
            for(int j = i+1; j<=n; j++) {
                gcd = gcdf(i, j);
                if(final<gcd) {
                    final = gcd;
                }
                continue;
            }
        }
        cout<<final<<'\n';
    }
    return 0;
}

int gcdf(int i, int j) {
    int rem;
    while(rem!=0) {
        rem=j%i;
        j=i;
        i=rem;
    }
    return j;
}