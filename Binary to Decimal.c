#include <stdio.h>
#include <conio.h>
void main()
{
start:
    printf("Welcome To Our Program:-\n");
    int num, binary_val, decimal_val = 0, base = 1, rem;
    printf("Enter a binary number(1s and 0s)(max - 5 digits):");
    scanf("%d", &num); /* maximum five digits */
    binary_val = num;
    while (num > 0)
    {
        rem = num % 10;
        decimal_val = decimal_val + rem * base;
        num = num / 10;
        base = base * 2;
    }
    printf("The Binary number is = %d \n", binary_val);
    printf("Its decimal equivalent is = %d \n", decimal_val);
    char permit;
    printf("\nIf You Wanna Use This Program Again.Press 'Y': ");
    getchar();
    scanf("%c", &permit);
    if (permit == 'Y' || permit == 'y')
    {
        printf("Redirecting To Program \n");
        goto start;
    }
    else
    {
        printf("Thanks for using our program.\nDeveloped by Madhvendra Singh");
    }
    getch();
}
