#include<iostream>
using namespace std;

bool isPalindrome(long long x);

int main () {
    long long num;
    cin>> num;
    bool check = isPalindrome(num);
    if(check){
        cout<<"true\n";
    }else {
        cout<<"false\n";
    }
    return 0;
}

bool isPalindrome(long long x) {
    long long reversed=0;
    long long original = x;
    if(x<0) return false;
    do{
        reversed = reversed*10+ x%10;
        x = x/10;
    } while (x!=0);
    if (reversed == original) return true;
    return false;
}