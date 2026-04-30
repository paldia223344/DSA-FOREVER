#include <stdio.h>
#include <stdlib.h>

struct n {
    int d;
    struct n *l, *r;
};

struct n* create(int x) {
    struct n* z = (struct n*)malloc(sizeof(struct n));
    z->d = x;
    z->l = z->r = NULL;
    return z;
}

struct n* ins(struct n* r, int x) {
    if(r == NULL)
        return create(x);

    if(x < r->d)
        r->l = ins(r->l, x);
    else
        r->r = ins(r->r, x);

    return r;
}

void in(struct n* r) {
    if(r) {
        in(r->l);
        printf("%d ", r->d);
        in(r->r);
    }
}

int main() {
    struct n* root = NULL;
    int n, i, x;

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &x);
        root = ins(root, x);
    }

    in(root);

    return 0;
}