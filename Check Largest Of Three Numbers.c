#include <stdio.h>
#include <conio.h>
void main()
{
start:
    printf("Welcome To Our Program :-\n");
    // Enter Values
    int a, b, c;
    printf("Enter The Value 'A': ");
    scanf("%d", &a);
    printf("Enter The Value 'B': ");
    scanf("%d", &b);
    printf("Enter The Value 'C': ");
    scanf("%d", &c);
    // Check Bigger Value
    if (a > b)
    {
        if (a > c)
        {
            printf("%d is larger.", a);
        }
        else
        {
            printf("%d is larger", c);
        }
    }
    else if (c > a)
    {
        if (c > b)
        {
            printf("%d is Larger.", c);
        }
        else
        {
            printf("%c is Larger.", b);
        }
    }

    else
    {
        printf("%d is larger", b);
    }
    // Again Use This Program
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