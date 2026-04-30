
#include <stdio.h>
#include <stdlib.h>

struct n {
    int d;
    struct n *p;
};

int main() {
    int m, i, x, k;
    struct n *h = NULL, *t = NULL, *z, *q = NULL;

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

    z = h;

    while(z != NULL) {
        if(z->d == k) {
            if(q == NULL)
                h = z->p;
            else
                q->p = z->p;
            free(z);
            break;
        }
        q = z;
        z = z->p;
    }

    z = h;

    while(z != NULL) {
        printf("%d ", z->d);
        z = z->p;
    }

    return 0;
}