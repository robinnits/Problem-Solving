#include<iostream>
using namespace std;

int getdigit(long long num);
int ispalindrome(int array[], int size);

int main() {
    long long num;
    cin>> num;
    if(num<0) {
        cout<<"false\n";
    }else {
        int size = getdigit(num);
        int number[size], rem;
        for(int i = 0; i<size; i++) {
            rem = num%10;
            num=num/10;
            number[size-i-1]=rem;
        }
        int palindrome = ispalindrome(number, size);
        if (palindrome == 1) {
            cout<< "true\n";
        }else {
            cout<<"false\n";
        }
        return 0;
    }
}

int getdigit(long long num) {
    int digit = 0;
    do {
        num = num / 10;
        digit++;
    }while (num != 0);
    return digit;
}
int ispalindrome(int array[], int size) {
    for(int i =0; i<size; i++) {
        if(array[i]==array[size-1]) {
            return 1;
        } else {
            return 0;
        }
    }
    return 0;
}