#include <stdio.h>

int main() {
    int a[100], n, i, j, f[100] = {0};

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++) {
        if(f[i] == -1)
            continue;

        int c = 1;

        for(j = i + 1; j < n; j++) {
            if(a[i] == a[j]) {
                c++;
                f[j] = -1;
            }
        }

        f[i] = c;
    }

    for(i = 0; i < n; i++) {
        if(f[i] != -1) {
            printf("%d %d\n", a[i], f[i]);
        }
    }

    return 0;
}