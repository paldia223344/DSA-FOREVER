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

int leaf(struct n* r) {
    if(r == NULL)
        return 0;

    if(r->l == NULL && r->r == NULL)
        return 1;

    return leaf(r->l) + leaf(r->r);
}

int main() {
    struct n *root;

    root = create(1);
    root->l = create(2);
    root->r = create(3);
    root->l->l = create(4);
    root->l->r = create(5);

    printf("%d", leaf(root));

    return 0;
}