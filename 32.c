#include <stdio.h>
#include <stdlib.h>

struct n {
    int c, e;
    struct n *p;
};

int main() {
    int m, i;
    struct n *h = NULL, *t = NULL, *z;

    scanf("%d", &m);

    for(i = 0; i < m; i++) {
        z = (struct n*)malloc(sizeof(struct n));
        scanf("%d %d", &z->c, &z->e);
        z->p = NULL;

        if(h == NULL) {
            h = z;
            t = z;
        } else {
            t->p = z;
            t = z;
        }
    }

    z = h;

    while(z != NULL) {
        printf("%dx^%d", z->c, z->e);
        if(z->p != NULL)
            printf(" + ");
        z = z->p;
    }

    return 0;
}