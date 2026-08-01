#include <stdio.h>
#include <string.h>

int main() {
    char str[100], rev[100];

    printf("Enter a string: ");
    scanf("%s", str);

    strcpy(rev, str);

    strrev(rev);

    printf("Reversed String: %s", rev);

    return 0;
}
