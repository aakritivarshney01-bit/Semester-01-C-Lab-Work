#include <stdio.h>

int main()
{
    int num, n, digit, newnum = 0, place = 1;

    printf("Enter a 5-digit number: ");
    scanf("%d", &num);

    n = num;

    while(n > 0)
    {
        digit = n % 10;         
        digit = (digit + 1) % 10; 
        newnum = newnum + digit * place;
        place = place * 10;
        n = n / 10;             
    }

    printf("New number = %d", newnum);

    return 0;
}
