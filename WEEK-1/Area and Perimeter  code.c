#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    float l, b, r, a, s1, s2, s3, area, peri;

    printf("Choose shape:\n");
    printf("1. Rectangle\n");
    printf("2. Circle\n");
    printf("3. Triangle\n");
    printf("4. Cube\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter length and breadth: ");
        scanf("%f %f", &l, &b);
        area = l * b;
        peri = 2 * (l + b);
        printf("Area = %.2f\n", area);
        printf("Perimeter = %.2f\n", peri);
    }
    else if (choice == 2) {
        printf("Enter radius: ");
        scanf("%f", &r);
        area = 3.14 * r * r;
        peri = 2 * 3.14 * r;
        printf("Area = %.2f\n", area);
        printf("Perimeter = %.2f\n", peri);
    }
    else if (choice == 3) {
        printf("Enter three sides: ");
        scanf("%f %f %f", &s1, &s2, &s3);
        peri = s1 + s2 + s3;
        float s = peri / 2;
        area = sqrt(s * (s - s1) * (s - s2) * (s - s3));
        printf("Area = %.2f\n", area);
        printf("Perimeter = %.2f\n", peri);
    }
    else if (choice == 4) {
        printf("Enter side of cube: ");
        scanf("%f", &a);
        area = 6 * a * a;
        peri = 12 * a;
        printf("Surface Area = %.2f\n", area);
        printf("Perimeter = %.2f\n", peri);
    }
    else {
        printf("Wrong choice\n");
    }

    return 0;
}
