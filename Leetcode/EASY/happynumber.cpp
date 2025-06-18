#include<iostream>
using namespace std;

bool isHappy(int n);

int main() {
    int n;
    cin>> n;
    bool result = isHappy(n);
    if(result) cout<<"true\n";
    else cout<<"false\n";
    return 0;
}

bool isHappy(int n) {
    if(n==1 || n==7) return true;
    else if(n<10) return false;
    else{
        int sum=0;
        while(n!=0){
            int temp=n%10;
            sum+= temp*temp;
            n=n/10;
        }
        return isHappy(sum);
    }
}