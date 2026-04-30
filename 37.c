#include <stdio.h>

int main() {
    int a[100], f = 0, r = -1, n, ch, x;

    scanf("%d", &n);

    while(1) {
        scanf("%d", &ch);

        if(ch == 1) {
            if(r == n - 1)
                printf("Overflow\n");
            else {
                scanf("%d", &x);
                a[++r] = x;
            }
        }
        else if(ch == 2) {
            if(f > r)
                printf("Underflow\n");
            else
                printf("%d\n", a[f++]);
        }
        else if(ch == 3) {
            if(f > r)
                printf("Empty\n");
            else {
                for(int i = f; i <= r; i++)
                    printf("%d ", a[i]);
                printf("\n");
            }
        }
        else
            break;
    }

    return 0;
}