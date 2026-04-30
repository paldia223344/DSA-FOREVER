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

int search(struct n* r, int x) {
    if(r == NULL)
        return 0;

    if(r->d == x)
        return 1;

    if(x < r->d)
        return search(r->l, x);
    else
        return search(r->r, x);
}

int main() {
    struct n* root = NULL;
    int n, i, x, k;

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &x);
        root = ins(root, x);
    }

    scanf("%d", &k);

    if(search(root, k))
        printf("Found");
    else
        printf("Not Found");

    return 0;
}