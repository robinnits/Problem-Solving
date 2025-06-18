#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b, c, d;
        cin >> a >> b >> c >> d;
        int count1 = min(a,c);
        int count2 = min(b,d);
        if(count1>=count2) cout<<"Gellyfish\n";
        else cout<<"Flower\n";
    }
    return 0;
}

// #include<iostream>
// using namespace std;

// int main() {
//     int t;
//     cin>> t;
//     while(t!=0){
//         long long a, b, c, d;
//         cin>> a>>b>>c>>d;
//         int round = 1;
//         while(true) {
//             if(round%2!=0) {
//                 if(c>0) {
//                     if(d>0){
//                         d--;
//                     }else {
//                         b--;
//                     }
//                 }
//                 if(b==0 || d==0) {
//                     cout<<"Gellyfish\n";
//                     break;
//                 }
//             }
//             else {
//                 if (d>0) {
//                     if(c>0) {
//                         c--;
//                     }else {
//                         a--;
//                     }
//                 }
//                 if(a==0 || c==0) {
//                     cout<<"Flower\n";
//                     break;
//                 }
//             }
//             round++;
//         }
//         t--;
//     }
//     return 0;
// }