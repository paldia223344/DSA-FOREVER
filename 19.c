#include <stdio.h>
#include <stdlib.h>

int cmp(const void *x, const void *y) {
    return (*(int*)x - *(int*)y);
}

int main() {
    int a[100], n, i, l, r;
    int s, best, x, y;

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    qsort(a, n, sizeof(int), cmp);

    l = 0;
    r = n - 1;
    best = a[l] + a[r];
    x = a[l];
    y = a[r];

    while(l < r) {
        s = a[l] + a[r];

        if(abs(s) < abs(best)) {
            best = s;
            x = a[l];
            y = a[r];
        }

        if(s < 0)
            l++;
        else
            r--;
    }

    printf("%d %d", x, y);

    return 0;
}