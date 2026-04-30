#include <stdio.h>

int main() {
    int a[100], n, i, j, c = 0;

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++) {
        int s = 0;
        for(j = i; j < n; j++) {
            s += a[j];
            if(s == 0)
                c++;
        }
    }

    printf("%d", c);

    return 0;
}