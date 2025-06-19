#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int p, q;
    cin>>p;
    int arr1[p];
    for(int i =0; i<p; i++) {
        cin>>arr1[i];
    }
    cin>>q;
    int arr2[q];
    for(int i =0; i<q; i++) {
        cin>>arr2[i];
    }
    int common = 0;
    for(int i = 0; i<p; i++) {
        for(int j = 0; j<q; j++) {
            if(arr1[i]==arr2[j]) common++;
        }
    }
    int total = (p+q) - common;
    if(total>=n) cout<<"I become the guy.\n";
    else cout<<"Oh, my keyboard!\n";
    return 0;
}