#include <stdio.h>

int main() {
    int a[100], n, i, key, count = 0, pos = -1;

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    scanf("%d", &key);

    for(i = 0; i < n; i++) {
        count++;
        if(a[i] == key) {
            pos = i;
            break;
        }
    }

    if(pos != -1) {
        printf("Found at position %d\n", pos + 1);
    } else {
        printf("Not Found\n");
    }

    printf("Comparisons: %d", count);

    return 0;
}