#include <stdio.h>
#include <stdlib.h>

struct n {
    int d;
    struct n *l, *r;
};

struct n* q[100];
int f = 0, r = -1;

void enq(struct n* x) {
    q[++r] = x;
}

struct n* deq() {
    return q[f++];
}

int empty() {
    return f > r;
}

int main() {
    struct n *root, *t;
    struct n *z;

    root = (struct n*)malloc(sizeof(struct n));
    root->d = 1;
    root->l = root->r = NULL;

    enq(root);

    while(!empty()) {
        t = deq();
        printf("%d ", t->d);

        z = (struct n*)malloc(sizeof(struct n));
        z->d = t->d * 2;
        z->l = z->r = NULL;
        t->l = z;
        enq(z);

        z = (struct n*)malloc(sizeof(struct n));
        z->d = t->d * 2 + 1;
        z->l = z->r = NULL;
        t->r = z;
        enq(z);

        if(t->d > 5) break;
    }

    return 0;
}