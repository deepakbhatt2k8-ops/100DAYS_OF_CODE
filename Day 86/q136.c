//Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.
#include <stdio.h>

enum Menu {
    ADD = 1,
    SUBTRACT,
    MULTIPLY
};

int main() {
    enum Menu choice;
    int a, b;
    int ch;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &ch);

    choice = ch;

    switch (choice) {
        case ADD:
            printf("%d", a + b);
            break;

        case SUBTRACT:
            printf("%d", a - b);
            break;

        case MULTIPLY:
            printf("%d", a * b);
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}
