#include <stdio.h>
#include <stdlib.h>

struct n {
    int d;
    struct n *l, *r;
};

int main() {
    int m, i, x;
    struct n *h = NULL, *t = NULL, *z, *y;

    scanf("%d", &m);

    for(i = 0; i < m; i++) {
        scanf("%d", &x);

        z = (struct n*)malloc(sizeof(struct n));
        z->d = x;
        z->l = t;
        z->r = NULL;

        if(h == NULL) {
            h = z;
        } else {
            t->r = z;
        }
        t = z;
    }

    y = h;
    while(y != NULL) {
        printf("%d ", y->d);
        y = y->r;
    }

    printf("\n");

    y = t;
    while(y != NULL) {
        printf("%d ", y->d);
        y = y->l;
    }

    return 0;
}