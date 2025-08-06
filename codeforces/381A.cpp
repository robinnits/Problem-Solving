#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i =0; i<n; i++) {
        cin>>arr[i];
    }
    int sereja = 0, dima = 0;
    int a = 0, b = n-1, count = 1;
    bool running  =  true;
    while(running) {
        if(count%2!=0) {
            sereja = sereja + max(arr[a], arr[b]);
            if(arr[a]>arr[b]) {
                a++;
            } else {
                b--;
            }
        } else {
            dima = dima + max(arr[a], arr[b]);
            if(arr[a]>arr[b]) {
                a++;
            } else {
                b--;
            }
        }
        count++;
        if(count>n) running = false;
    }
    cout<<sereja<<" "<<dima<<'\n';
    return 0;
}