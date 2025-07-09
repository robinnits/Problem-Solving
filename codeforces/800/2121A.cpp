#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n, s;
        cin>>n>>s;
        int arr[n];
        for(int i = 0; i<n; i++) {
            cin>>arr[i];
        }
        if(s<arr[0]) {
            cout<<arr[n-1]-s<<'\n';
        }
        else if(s>arr[n-1]) {
            cout<<s-arr[0]<<'\n';
        } else {
            int step1 = (s-arr[0])+(arr[n-1]-arr[0]);
            int step2 = (arr[n-1]-s)+(arr[n-1]-arr[0]);
            if(step1<step2) cout<<step1<<'\n';
            else cout<<step2<<'\n';
        }
    }
    return 0;
}