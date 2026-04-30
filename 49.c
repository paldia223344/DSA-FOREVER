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

int h(struct n* r) {
    if(r == NULL)
        return 0;

    int a = h(r->l);
    int b = h(r->r);

    if(a > b)
        return a + 1;
    else
        return b + 1;
}

int main() {
    struct n *root;

    root = create(1);
    root->l = create(2);
    root->r = create(3);
    root->l->l = create(4);
    root->l->r = create(5);

    printf("%d", h(root));

    return 0;
}