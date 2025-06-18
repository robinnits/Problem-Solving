#include<iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    do{
        int x,y,n;
        cin>> x >> y>> n;
        // for(int i=n; i>=0; i--) {
        //     if(i%x == y) {
        //         cout<<i<<'\n';
        //         break;
        //     }
        // }
        int result = n - (n-y)%x; 
        cout<< result<< '\n';
        t--;
    }while(t!=0);
    return 0;
}