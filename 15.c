#include <stdio.h>

int main() {
    int a[10][10], n, i, j;
    int s1 = 0, s2 = 0;

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < n; i++) {
        s1 += a[i][i];
        s2 += a[i][n - i - 1];
    }

    printf("%d %d", s1, s2);

    return 0;
}