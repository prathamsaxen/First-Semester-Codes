#include <stdio.h>
#include <conio.h>
void main()
{
start:
    printf("Welcome to our program:-\n");
    int a, x, b, n, y;
    printf("Select the function of y:-");
    printf("\nPress 1 for 'y=ax%%b'");
    printf("\nPress 2 for 'y=ax2+b2'");
    printf("\nPress 3 for 'y=a-bx'");
    printf("\nPress 4 for 'y=a+x/b'");
    printf("\nPress 1/2/3/4: ");
    scanf("%d", &n);
    printf("Now enter the rest values:-\n");
    printf("Enter The Value of 'A': ");
    scanf("%d", &a);
    printf("Enter The Value of 'B': ");
    scanf("%d", &b);
    printf("Enter The Value of 'X': ");
    scanf("%d", &x);
    if (n == 1)
    {
        printf("You have selected 'y=ax%%b'");
        y = a * x % b;
        printf("\ny=%d", y);
    }
    else if (n == 2)
    {
        printf("You have selected 'y=ax2+b2'");
        y = a * x * 2 + b * 2;
        printf("\ny=%d", y);
    }
    else if (n == 3)
    {
        printf("You have selected 'y=a-bx'");
        y = a - b * x;
        printf("\ny=%d", y);
    }
    else if (n == 4)
    {
        printf("You have selected 'y=a+x/b'");
        y = a + x / b;
        printf("\ny=%d", y);
    }
    else 
    {
        printf("You have not selected any correct parameter.");
    }
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
