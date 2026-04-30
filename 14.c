#include <stdio.h>

int main() {
    int a[10][10], n, i, j, f = 1;

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if((i == j && a[i][j] != 1) || (i != j && a[i][j] != 0)) {
                f = 0;
                break;
            }
        }
    }

    if(f)
        printf("Identity Matrix");
    else
        printf("Not Identity Matrix");

    return 0;
}