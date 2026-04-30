#include <stdio.h>

int f(int n) {
    if(n <= 1)
        return n;
    return f(n - 1) + f(n - 2);
}

int main() {
    int n, i;

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("%d ", f(i));
    }

    return 0;
}