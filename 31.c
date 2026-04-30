#include <stdio.h>
#include <stdlib.h>

struct n {
    int d;
    struct n *p;
};

int main() {
    int m, i, x, k;
    struct n *h = NULL, *t = NULL, *z, *q;

    scanf("%d", &m);

    for(i = 0; i < m; i++) {
        scanf("%d", &x);

        z = (struct n*)malloc(sizeof(struct n));
        z->d = x;
        z->p = NULL;

        if(h == NULL) {
            h = z;
            t = z;
        } else {
            t->p = z;
            t = z;
        }
    }

    scanf("%d", &k);

    if(h == NULL || k == 0)
        return 0;

    int c = 1;
    q = h;
    while(q->p != NULL) {
        q = q->p;
        c++;
    }

    k = k % c;
    if(k == 0) {
        q = h;
        while(q) {
            printf("%d ", q->d);
            q = q->p;
        }
        return 0;
    }

    q->p = h;

    int s = c - k;
    q = h;
    while(--s) {
        q = q->p;
    }

    h = q->p;
    q->p = NULL;

    q = h;
    while(q) {
        printf("%d ", q->d);
        q = q->p;
    }

    return 0;
}