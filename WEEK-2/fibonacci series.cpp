#include <stdio.h>

int fibonacci(int n) {
    int first = 0, second = 1, next;

    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;

    for (int i = 2; i <= n; i++) {
        next = first + second;
        first = second;
        second = next;
    }

    return second;
}

int main() {
    int n;

    printf("Enter the term number: ");
    scanf("%d", &n);

    printf("Fibonacci number at position %d = %d\n", n, fibonacci(n));

    return 0;
}

