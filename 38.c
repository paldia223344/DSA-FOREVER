#include <stdio.h>

int main() {
    int a[100], f = -1, r = -1, n, ch, x;

    scanf("%d", &n);

    while(1) {
        scanf("%d", &ch);

        if(ch == 1) {
            if((r + 1) % n == f)
                printf("Overflow\n");
            else {
                scanf("%d", &x);
                if(f == -1) f = 0;
                r = (r + 1) % n;
                a[r] = x;
            }
        }
        else if(ch == 2) {
            if(f == -1)
                printf("Underflow\n");
            else {
                printf("%d\n", a[f]);
                if(f == r)
                    f = r = -1;
                else
                    f = (f + 1) % n;
            }
        }
        else if(ch == 3) {
            if(f == -1)
                printf("Empty\n");
            else {
                int i = f;
                while(1) {
                    printf("%d ", a[i]);
                    if(i == r) break;
                    i = (i + 1) % n;
                }
                printf("\n");
            }
        }
        else
            break;
    }

    return 0;
}