#include <stdio.h>
#include <conio.h>
int factorial_sum(int a)
{
    int factorial = 1;
    if (a == 1)
    {
        return factorial;
    }
    else
    {
        for (int index = 1; index < a; index++)
        {
            factorial=a*factorial_sum(a-1);
        }
    }
    return factorial;
}
void main()
{
    start:
    printf("Welcome to program:-");
    int a,sum=0,temp;
    printf("\nHow Much Terms Of Series You Wanna Add: ");
    scanf("%d",&a);
    temp=a;
    while(a>0)
    {
        sum=sum+factorial_sum(a);
        a=a-1;
    }
    printf("The Sum of %d terms of your series is %d",a,sum);
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
