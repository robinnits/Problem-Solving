#include<iostream>
using namespace std;

bool checkyear(int y);

int main() {
    int y, k;
    cin>>y;
    y++;
    while(checkyear(y)) {
        y++;
        checkyear(y);
    }
    cout<<y<<'\n';
}

bool checkyear(int y) {
    int rem1, rem2, rem3, rem4;
    rem1 = y%10;
    y = y/10;
    rem2 = y%10;
    y = y/10;
    rem3 = y%10;
    y = y/10;
    rem4 = y%10;
    y = y/10;
    if(rem1==rem2 || rem1==rem3 || rem1==rem4 || rem2==rem3 || rem2== rem4 || rem3==rem4) return true;
    else return false;
}