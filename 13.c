#include <stdio.h>

int main() {
    int a[10][10], r, c, i;
    int t = 0, b, l = 0, rt;

    scanf("%d %d", &r, &c);

    b = r - 1;
    rt = c - 1;

    for(i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    while(t <= b && l <= rt) {

        for(i = l; i <= rt; i++)
            printf("%d ", a[t][i]);
        t++;

        for(i = t; i <= b; i++)
            printf("%d ", a[i][rt]);
        rt--;

        if(t <= b) {
            for(i = rt; i >= l; i--)
                printf("%d ", a[b][i]);
            b--;
        }

        if(l <= rt) {
            for(i = b; i >= t; i--)
                printf("%d ", a[i][l]);
            l++;
        }
    }

    return 0;
}