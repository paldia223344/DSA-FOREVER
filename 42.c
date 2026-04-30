#include <stdio.h>

void heapify(int a[], int n, int i) {
    int mx = i, l = 2*i + 1, r = 2*i + 2, t;

    if(l < n && a[l] > a[mx]) mx = l;
    if(r < n && a[r] > a[mx]) mx = r;

    if(mx != i) {
        t = a[i];
        a[i] = a[mx];
        a[mx] = t;
        heapify(a, n, mx);
    }
}

int main() {
    int a[100], n, i, t;

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for(i = n/2 - 1; i >= 0; i--) {
        heapify(a, n, i);
    }

    for(i = n - 1; i > 0; i--) {
        t = a[0];
        a[0] = a[i];
        a[i] = t;

        heapify(a, i, 0);
    }

    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}