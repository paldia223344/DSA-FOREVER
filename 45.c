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

int main() {
    int x;
    struct n *root = NULL, *t, *z;

    scanf("%d", &x);

    if(x == -1) {
        printf("Empty Tree");
        return 0;
    }

    root = (struct n*)malloc(sizeof(struct n));
    root->d = x;
    root->l = root->r = NULL;

    enq(root);

    while(f <= r) {
        t = deq();

        scanf("%d", &x);
        if(x != -1) {
            z = (struct n*)malloc(sizeof(struct n));
            z->d = x;
            z->l = z->r = NULL;
            t->l = z;
            enq(z);
        }

        scanf("%d", &x);
        if(x != -1) {
            z = (struct n*)malloc(sizeof(struct n));
            z->d = x;
            z->l = z->r = NULL;
            t->r = z;
            enq(z);
        }
    }

    return 0;
}