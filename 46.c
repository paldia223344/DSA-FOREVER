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

void pre(struct n* r) {
    if(r) {
        printf("%d ", r->d);
        pre(r->l);
        pre(r->r);
    }
}

void in(struct n* r) {
    if(r) {
        in(r->l);
        printf("%d ", r->d);
        in(r->r);
    }
}

void post(struct n* r) {
    if(r) {
        post(r->l);
        post(r->r);
        printf("%d ", r->d);
    }
}

int main() {
    struct n *root;

    root = create(1);
    root->l = create(2);
    root->r = create(3);
    root->l->l = create(4);
    root->l->r = create(5);

    printf("Preorder: ");
    pre(root);
    printf("\nInorder: ");
    in(root);
    printf("\nPostorder: ");
    post(root);

    return 0;
}