#include <stdio.h>

int main() {
    int a, b, c;
    int x, y, z;

    printf("Enter three sides of triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b + c || b >= a + c || c >= a + b) {
        printf("No triangle is formed\n");
    } else {
        if (a >= b && a >= c) {
            x = a; y = b; z = c;
        } else if (b >= a && b >= c) {
            x = b; y = a; z = c;
        } else {
            x = c; y = a; z = b;
        }

        if (x*x == y*y + z*z) {
            printf("It is a Right-angled Triangle\n");
        } else if (x*x > y*y + z*z) {
            printf("It is an Obtuse-angled Triangle\n");
        } else {
            printf("It is an Acute-angled Triangle\n");
        }
    }
    return 0;
}
