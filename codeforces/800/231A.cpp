#include<iostream>
using namespace std;

int main () {
    int n;
    cin>>n;
    int arr[n][3];
    for(int i =0; i<n; i++) {
        for (int j =0; j<3; j++) {
            cin>>arr[i][j];
        }
    }
    int total = 0;
    for(int i = 0; i<n; i++) {
        if(arr[i][0]+arr[i][1]+arr[i][2]>=2) total++;
    }
    cout<<total<<'\n';
    return 0;
}