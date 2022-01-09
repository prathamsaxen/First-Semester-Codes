#include <stdio.h>
#include <conio.h>
int func(int a)
{
    if (a)
    {
        int remainder, sum = 0;
        remainder = a % 10;
        a = a / 10;
        sum += remainder + func(a);

        return sum;
    }
    else
    {
        return 0;
    }
}
void main()
{
start:
    printf("Welcome to our program:-\n");
    int num;
    printf("Enter a 5 Digit Number: ");
    scanf("%d", &num);
    printf("Sum[%d]=%d", num, func(num));
    char permit;
    printf("\nIf You Wanna Use This Program Again.Press 'Y': ");
    getchar();
    scanf("%c", &permit);
    if (permit = 'Y' && permit == 'y')
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
