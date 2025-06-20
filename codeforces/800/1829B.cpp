#include<iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int arr[n];
        for(int i =0; i<n; i++) {
            cin>>arr[i];
        }
        int count = 0, temp =0;
        for(int i =0; i<n; i++) {
            if(arr[i]==0) {
                count++;
            }
            else {
                temp = max(count, temp);
                count = 0;
            }
        }
        temp = max(count, temp);
        cout<<temp<<'\n';
    }
    return 0;
}