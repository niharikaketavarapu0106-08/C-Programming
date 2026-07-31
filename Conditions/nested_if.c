#include <stdio.h>

int main() {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18) {
        if (age >= 60)
            printf("Senior Citizen");
        else
            printf("Adult");
    } else {
        printf("Minor");
    }

    return 0;
}
