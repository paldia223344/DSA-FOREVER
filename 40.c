#include <stdio.h>

int main() {
    int a[100], f = -1, r = -1, n, ch, x;

    scanf("%d", &n);

    while(1) {
        scanf("%d", &ch);

        if(ch == 1) {
            if((f == 0 && r == n - 1) || (f == r + 1))
                printf("Overflow\n");
            else {
                scanf("%d", &x);
                if(f == -1) f = r = 0;
                else if(f == 0) f = n - 1;
                else f--;
                a[f] = x;
            }
        }
        else if(ch == 2) {
            if((f == 0 && r == n - 1) || (f == r + 1))
                printf("Overflow\n");
            else {
                scanf("%d", &x);
                if(f == -1) f = r = 0;
                else if(r == n - 1) r = 0;
                else r++;
                a[r] = x;
            }
        }
        else if(ch == 3) {
            if(f == -1)
                printf("Underflow\n");
            else {
                printf("%d\n", a[f]);
                if(f == r) f = r = -1;
                else if(f == n - 1) f = 0;
                else f++;
            }
        }
        else if(ch == 4) {
            if(f == -1)
                printf("Underflow\n");
            else {
                printf("%d\n", a[r]);
                if(f == r) f = r = -1;
                else if(r == 0) r = n - 1;
                else r--;
            }
        }
        else if(ch == 5) {
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