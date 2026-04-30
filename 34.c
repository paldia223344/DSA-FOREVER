#include <stdio.h>

int main() {
    int a[100], t = -1, n, ch, x;

    scanf("%d", &n);

    while(1) {
        scanf("%d", &ch);

        if(ch == 1) {
            if(t == n - 1)
                printf("Overflow\n");
            else {
                scanf("%d", &x);
                a[++t] = x;
            }
        }
        else if(ch == 2) {
            if(t == -1)
                printf("Underflow\n");
            else
                printf("%d\n", a[t--]);
        }
        else
            break;
    }

    return 0;
}