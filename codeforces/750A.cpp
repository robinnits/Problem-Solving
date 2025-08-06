#include<iostream>
using namespace std;

int main() {
    int n, k;
    cin>>n>>k;
    int timeneed = 240-k;
    int count = 0;
    int time = 0;
    for(int i =1; i<=n; i++) {
        time = time + 5*i;
        if(time<=timeneed) {
            count++;
        } else break;
    }
    cout<<count<<'\n';
    return 0;
}