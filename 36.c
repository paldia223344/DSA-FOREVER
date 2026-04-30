#include <stdio.h>
#include <ctype.h>

int s[100];
int t = -1;

void push(int x) {
    s[++t] = x;
}

int pop() {
    return s[t--];
}

int main() {
    char a[100];
    int i = 0, x, y;

    scanf("%s", a);

    while(a[i]) {
        if(isdigit(a[i])) {
            push(a[i] - '0');
        }
        else {
            y = pop();
            x = pop();

            if(a[i] == '+') push(x + y);
            else if(a[i] == '-') push(x - y);
            else if(a[i] == '*') push(x * y);
            else if(a[i] == '/') push(x / y);
        }
        i++;
    }

    printf("%d", pop());

    return 0;
}