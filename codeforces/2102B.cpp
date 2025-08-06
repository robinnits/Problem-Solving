#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t!=0) {
        int n;
        cin>>n;
        int array[n];
        for(int i = 0; i<n; i++) {
            cin>>array[i];
        }
        int temp = array[0];
        int greater=0, lower=0;
        for(int i = 0; i<n; i++) {
            if(abs(array[0])<abs(array[i])) greater++;
            else lower++;
        }
        if(greater<=0) cout<<"NO\n";
        else cout<<"YES\n";
        t--;
    }
    return 0;
}