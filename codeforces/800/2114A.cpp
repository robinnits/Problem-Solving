#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t!=0){
        int num;
        cin>>num;
        int root = ceil(sqrt(num));
        if(root*root==num) cout<<"0 "<<root<<'\n';
        else cout<<"-1\n";
        t--;
    }
    return 0;
}