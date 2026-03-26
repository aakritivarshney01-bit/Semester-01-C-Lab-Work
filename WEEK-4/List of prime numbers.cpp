#include <stdio.h>

int main() {
    int a, b, i, j, count;

    printf("Enter lower limit: ");
    scanf("%d", &a);

    printf("Enter upper limit: ");
    scanf("%d", &b);

    printf("Prime numbers between %d and %d are:\n", a, b);

    for(i = a; i <= b; i++) {
        if(i < 2)
            continue;   

        count = 0;

        for(j = 2; j < i; j++) {
            if(i % j == 0) {
                count = 1;
                break;
            }
        }

        if(count == 0)
            printf("%d ", i);
    }

    return 0;
}
