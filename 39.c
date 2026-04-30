#include <stdio.h>

int main() {
    int v[100], p[100], n, i, j, ch, x, pr;

    scanf("%d", &n);
    int s = 0;

    while(1) {
        scanf("%d", &ch);

        if(ch == 1) {
            if(s == n)
                printf("Overflow\n");
            else {
                scanf("%d %d", &x, &pr);
                i = s - 1;
                while(i >= 0 && p[i] < pr) {
                    v[i + 1] = v[i];
                    p[i + 1] = p[i];
                    i--;
                }
                v[i + 1] = x;
                p[i + 1] = pr;
                s++;
            }
        }
        else if(ch == 2) {
            if(s == 0)
                printf("Underflow\n");
            else {
                printf("%d\n", v[0]);
                for(i = 1; i < s; i++) {
                    v[i - 1] = v[i];
                    p[i - 1] = p[i];
                }
                s--;
            }
        }
        else if(ch == 3) {
            if(s == 0)
                printf("Empty\n");
            else {
                for(i = 0; i < s; i++)
                    printf("%d(%d) ", v[i], p[i]);
                printf("\n");
            }
        }
        else
            break;
    }

    return 0;
}