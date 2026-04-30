#include <stdio.h>
#include <stdlib.h>

struct n {
    int d;
    struct n *p;
};

int main() {
    int m, i, x, k, c = 0;
    struct n *h = NULL, *t = NULL, *z;

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
        if(z->d == k)
            c++;
        z = z->p;
    }

    printf("%d", c);

    return 0;
}