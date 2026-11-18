//Show that enums store integers by printing assigned values.
#include <stdio.h>

enum Color {
    RED = 10,
    GREEN = 20,
    BLUE = 30
};

int main() {
    enum Color color1 = RED;
    enum Color color2 = GREEN;
    enum Color color3 = BLUE;

    printf("RED = %d\n", color1);
    printf("GREEN = %d\n", color2);
    printf("BLUE = %d\n", color3);

    return 0;
}