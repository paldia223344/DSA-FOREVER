#include <stdio.h>
#include <stdlib.h>

struct n {
    int d;
    struct n *p;
};

int main() {
    int ch, x;
    struct n *f = NULL, *r = NULL, *z;

    while(1) {
        scanf("%d", &ch);

        if(ch == 1) {
            scanf("%d", &x);
            z = (struct n*)malloc(sizeof(struct n));
            z->d = x;
            z->p = NULL;

            if(r == NULL) {
                f = r = z;
            } else {
                r->p = z;
                r = z;
            }
        }
        else if(ch == 2) {
            if(f == NULL)
                printf("Underflow\n");
            else {
                z = f;
                printf("%d\n", z->d);
                f = f->p;
                if(f == NULL) r = NULL;
                free(z);
            }
        }
        else if(ch == 3) {
            if(f == NULL)
                printf("Empty\n");
            else {
                z = f;
                while(z != NULL) {
                    printf("%d ", z->d);
                    z = z->p;
                }
                printf("\n");
            }
        }
        else
            break;
    }

    return 0;
}