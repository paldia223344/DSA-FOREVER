#include <stdio.h>
#include <ctype.h>

char s[100];
int t = -1;

void push(char x) {
    s[++t] = x;
}

char pop() {
    return s[t--];
}

int pr(char x) {
    if(x == '+' || x == '-') return 1;
    if(x == '*' || x == '/') return 2;
    if(x == '^') return 3;
    return 0;
}

int main() {
    char a[100], b[100];
    int i = 0, k = 0;

    scanf("%s", a);

    while(a[i]) {
        if(isalnum(a[i])) {
            b[k++] = a[i];
        }
        else if(a[i] == '(') {
            push(a[i]);
        }
        else if(a[i] == ')') {
            while(t != -1 && s[t] != '(')
                b[k++] = pop();
            pop();
        }
        else {
            while(t != -1 && pr(s[t]) >= pr(a[i]))
                b[k++] = pop();
            push(a[i]);
        }
        i++;
    }

    while(t != -1)
        b[k++] = pop();

    b[k] = '\0';

    printf("%s", b);

    return 0;
}