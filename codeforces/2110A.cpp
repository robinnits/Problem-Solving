#include<iostream>
#include<algorithm>
using namespace std;

int forwardcheck(int array[], int size);
int backwardcheck(int array[], int size);

int main() {
    int t;
    cin>> t;
    while(t!=0) {
        int n;
        cin>>n;
        int a[n];
        for(int i = 0; i<n; i++) {
            cin>>a[i];
        }
        sort(a, a+n);
        int check1, check2;
        check1 = forwardcheck(a, n);
        check2 = backwardcheck(a, n);
        if(check1<check2) cout<< check1<<'\n';
        else cout<< check2<<'\n';
        t--;
    }
    return 0;
}

int forwardcheck(int array[], int size) {
    for(int i =0; i<size; i++) {
        if((array[i]+array[size-1])%2==0){
            return i;
            break;
        }
    }
    return -1;
}
int backwardcheck(int array[], int size) {
    for(int i =size-1; i>=0; i--) {
        if((array[0]+array[i])%2==0){
            return size-i-1;
            break;
        }
    }
    return -1;
}