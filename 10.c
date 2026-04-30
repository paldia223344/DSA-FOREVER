#include <stdio.h>
#include <string.h>

int c(char s[], int l, int h) {
    if(l >= h)
        return 1;
    if(s[l] != s[h])
        return 0;
    return c(s, l + 1, h - 1);
}

int main() {
    char s[100];

    scanf("%s", s);

    if(c(s, 0, strlen(s) - 1))
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}