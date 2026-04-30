#include <stdio.h>

long long p(long long b, int e) {
    if(e == 0)
        return 1;
    return b * p(b, e - 1);
}

int main() {
    long long b;
    int e;

    scanf("%lld %d", &b, &e);

    printf("%lld", p(b, e));

    return 0;
}