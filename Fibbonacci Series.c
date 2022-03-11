#include <stdio.h>
#include <conio.h>
void main()
{
start:
    printf("Fibonacci Series Printer:-\n");
    int term, prev = 1, sec_prev = 0;
    printf("How much terms of Fibbonacci Series you wanna print? ");
    scanf("%d", &term);
    printf("%d,%d", sec_prev, prev);
    for (int index = 0; index < term-2; index++)
    {
        int sum = prev + sec_prev;
        sec_prev = prev;
        printf(",%d", sum);
        prev = sum;
    }
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
        printf("Thanks for using our program.");
    }
    getch();
}
