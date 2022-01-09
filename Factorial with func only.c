#include <stdio.h>
#include <conio.h>
int factorial(int a)
{
    int factorial_=1;
    if (a == 1)
    {
        return factorial_ = 1;
    }
    else
    {
        for (int index = 1; index < a+1; index++)
        {
            factorial_ = factorial_ * index;
        }
    }
    return factorial_;
}
void main()
{
start:
    printf("Welcome To Our Program:-");
    int num;
    printf("\nEnter The Number Whose Factorial You Wanna Print: ");
    scanf("%d", &num);
    printf("Factorial[%d] = %d", num, factorial(num));
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