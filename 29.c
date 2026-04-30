#include <stdio.h>
#include <stdlib.h>

struct n {
    int d;
    struct n *p;
};

int len(struct n *x) {
    int c = 0;
    while(x) {
        c++;
        x = x->p;
    }
    return c;
}

int main() {
    struct n *a = NULL, *b = NULL, *t, *u, *z;
    int m, i, x;

    scanf("%d", &m);
    for(i = 0; i < m; i++) {
        scanf("%d", &x);
        z = (struct n*)malloc(sizeof(struct n));
        z->d = x;
        z->p = a;
        a = z;
    }

    scanf("%d", &m);
    for(i = 0; i < m; i++) {
        scanf("%d", &x);
        z = (struct n*)malloc(sizeof(struct n));
        z->d = x;
        z->p = b;
        b = z;
    }

    t = a;
    u = b;

    int d = len(t) - len(u);

    if(d > 0) {
        while(d--) t = t->p;
    } else {
        d = -d;
        while(d--) u = u->p;
    }

    while(t && u) {
        if(t == u) {
            printf("%d", t->d);
            return 0;
        }
        t = t->p;
        u = u->p;
    }

    printf("No Intersection");

    return 0;
}