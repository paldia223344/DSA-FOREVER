#include <stdio.h>

int h[100], n = 0;

void ins(int x) {
    int i = n++;
    h[i] = x;

    while(i > 0) {
        int p = (i - 1) / 2;
        if(h[p] <= h[i]) break;

        int t = h[p];
        h[p] = h[i];
        h[i] = t;

        i = p;
    }
}

void del() {
    if(n == 0) {
        printf("Empty\n");
        return;
    }

    printf("%d\n", h[0]);
    h[0] = h[--n];

    int i = 0;

    while(1) {
        int l = 2 * i + 1, r = 2 * i + 2, s = i;

        if(l < n && h[l] < h[s]) s = l;
        if(r < n && h[r] < h[s]) s = r;

        if(s == i) break;

        int t = h[i];
        h[i] = h[s];
        h[s] = t;

        i = s;
    }
}

int main() {
    int ch, x;

    while(1) {
        scanf("%d", &ch);

        if(ch == 1) {
            scanf("%d", &x);
            ins(x);
        }
        else if(ch == 2) {
            del();
        }
        else if(ch == 3) {
            for(int i = 0; i < n; i++)
                printf("%d ", h[i]);
            printf("\n");
        }
        else
            break;
    }

    return 0;
}