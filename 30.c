#include <stdio.h>
#include <stdlib.h>

struct n {
    int d;
    struct n *p;
};

int main() {
    int m, i, x;
    struct n *h = NULL, *t = NULL, *z;

    scanf("%d", &m);

    for(i = 0; i < m; i++) {
        scanf("%d", &x);

        z = (struct n*)malloc(sizeof(struct n));
        z->d = x;

        if(h == NULL) {
            h = z;
            t = z;
            z->p = h;
        } else {
            z->p = h;
            t->p = z;
            t = z;
        }
    }

    if(h != NULL) {
        z = h;
        do {
            printf("%d ", z->d);
            z = z->p;
        } while(z != h);
    }

    return 0;
}