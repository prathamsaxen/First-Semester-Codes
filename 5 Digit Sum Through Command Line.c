#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int sum = 0, remainder, num = atoi(argv[1]);
    while (num > 0)
    {
        remainder = num % 10;
        sum = sum + remainder;
        num = num / 10;
    }
    printf("Sum[%d]=%d", atoi(argv[1]), sum);
    getch();
    return 0;
}
