#include <stdio.h>

int main() {
    int a[10][10], b[10][10], c[10][10];
    int r, s, i, j;

    scanf("%d %d", &r, &s);

    for(i = 0; i < r; i++) {
        for(j = 0; j < s; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < r; i++) {
        for(j = 0; j < s; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    for(i = 0; i < r; i++) {
        for(j = 0; j < s; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    for(i = 0; i < r; i++) {
        for(j = 0; j < s; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}