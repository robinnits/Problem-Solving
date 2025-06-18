#include<iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    do{
        int n;
        cin>> n;
        int array[n];
        for(int i = 0; i<n; i++) {
            cin>> array[i];
        }
        int count =0;
        for(int i = 0; i<n; i++) {
            if (array[i]%2!=0) count++;
            else continue;
        }
        if(count%2==0) cout<< "Yes\n";
        else cout<< "No\n";
        t--;
    }while(t!=0);
    return 0;
}