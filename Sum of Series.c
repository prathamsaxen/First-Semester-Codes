#include <stdio.h>
#include <conio.h>
void main()
{
start:
    printf("Welcome to program.");
    int factorial = 1, a, sum = 0;
    printf("\nEnter a Number Upto Where You Wanna Series: ");
    scanf("%d", &a);
    for (int index = 1; index < a + 1; index++)
    {
        factorial = index * factorial;
        /*  printf("Factorial=%d",factorial); */
        sum += factorial;
    }
    printf("Sum of series =%d", sum);
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