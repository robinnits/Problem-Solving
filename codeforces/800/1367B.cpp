#include<iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t!=0) {
        int n, even=0, odd=0;
        cin>>n;
        int array[n];
        for(int i =0; i<n; i++) {
            cin>> array[i];
        }
        for(int i =0; i<n; i+=2) {
            if(array[i]%2!=0) even++;
        }
        for(int i = 1; i<n; i+=2) {
            if(array[i]%2==0) odd++;
        }
        if(even==odd) cout<<even<<'\n';
        else cout<<"-1"<<'\n';
        t--;
    }
    return 0;
}