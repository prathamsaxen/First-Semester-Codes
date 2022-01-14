#include <stdio.h>
#include <conio.h>
void main()
{
start:
    printf("Welcome To Our Program");
    int num, remainder, sum = 0, sum2 = 0;
    printf("\nEnter a number: ");
    scanf("%d", &num);
    printf("Note:-If you entered 1234 --- 1+3=4");
    while (num > 0)
    {
        remainder = 0;
        remainder = num % 10;
        if (remainder % 2 != 0)
        {
            sum += remainder;
        }
        else
        {
            sum2 += remainder;
        }
        num = num / 10;
    }
    printf("\nSum of your entered 'Odd' digits =%d", sum);
    printf("\nSum of your entered 'Even' digits =%d", sum2);
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
        printf("Thanks for using our program.\nDeveloped by Er Pratham Saxena");
    }
    getch();
}
