#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int  n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int tvol = (k*l)/nl;
    int slice = c*d;
    int tsalt = p/np;
    cout<<(min(tvol, min(slice, tsalt)))/n<<'\n';
    return 0;
}