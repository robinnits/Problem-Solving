#include <stdio.h>

long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    long long a, b;
    scanf("%lld %lld", &a, &b);
    printf("%lld\n", gcd(a, b));
    return 0;
}
