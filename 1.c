#include <stdio.h>

int main() {
    int a[100], n, i, p, x;

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    scanf("%d", &p);
    scanf("%d", &x);

    for(i = n; i >= p; i--) {
        a[i] = a[i - 1];
    }

    a[p - 1] = x;
    n++;

    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}