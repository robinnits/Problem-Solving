#include<iostream>
using namespace std;

int main() {
    int t;
    cin>> t;
    do {
        int a, b;
        cin>>a>>b;
        if(a%b == 0) cout<< "0\n";
        else cout<< (((a/b)+1)*b)-a<<"\n";
        t--;
    }while(t!=0);
    return 0;
}