#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int x[4];
    for(int i = 0; i<4; i++) cin>>x[i];
    sort(x, x+4);
    cout<< x[3]-x[2]<< " "<<x[3]-x[1]<< " "<< x[3]-x[0]<<'\n';
    return 0;
}