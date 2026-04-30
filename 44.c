#include <stdio.h>

int q[100], s[100];
int f = 0, r = -1, t = -1;

void enq(int x) {
    q[++r] = x;
}

int deq() {
    return q[f++];
}

void push(int x) {
    s[++t] = x;
}

int pop() {
    return s[t--];
}

int main() {
    int n, i, x;

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &x);
        enq(x);
    }

    while(f <= r) {
        push(deq());
    }

    while(t >= 0) {
        enq(pop());
    }

    for(i = 0; i < n; i++) {
        printf("%d ", q[i]);
    }

    return 0;
}