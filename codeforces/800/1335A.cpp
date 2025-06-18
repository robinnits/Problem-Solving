#include<iostream>
using namespace std;

int main() {
    int t;
    cin>> t;
    do {
        long long n;
        cin>>n;
        if (n<3) cout<< "0\n";
        else {
            if(n%2!=0) cout<< n/2<<'\n';
            else cout<< n/2 -1<<'\n';
        }
        t--;
    }while(t!=0);
    return 0;
}