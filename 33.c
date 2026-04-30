#include <stdio.h>

int main() {
    int a[100], t = -1, n, x, ch;

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
                t--;
        }
        else if(ch == 3) {
            if(t == -1)
                printf("Empty\n");
            else {
                for(int i = t; i >= 0; i--)
                    printf("%d ", a[i]);
                printf("\n");
            }
        }
        else
            break;
    }

    return 0;
}