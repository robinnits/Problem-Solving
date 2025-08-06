#include<iostream>
using namespace std;

int main() {
    int t;
    cin>> t;
    while(t!=0) {
        int m, a, b, c;
        cin>>m>>a>>b>>c;
        int row1 = min(a, m);
        int row2 = min(b, m);
        int rest1 = m - row1;
        int rest2 = m - row2;
        int last = min(c, rest1+rest2);
        cout<<row1+row2+last<<'\n';
        t--;
    }
    return 0;
}