#include <stdio.h>
#include <string.h>

void r(char s[], int l, int h) {
    if(l >= h)
        return;

    char t = s[l];
    s[l] = s[h];
    s[h] = t;

    r(s, l + 1, h - 1);
}

int main() {
    char s[100];

    scanf("%s", s);

    r(s, 0, strlen(s) - 1);

    printf("%s", s);

    return 0;
}