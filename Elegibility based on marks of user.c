#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
start:
    printf("Welcome to our program");
    int physics, chemistry, math, total, PM;
    printf("\nEnter the marks of the Physics: ");
    scanf("%d", &physics);
    printf("Enter the marks of the Maths: ");
    scanf("%d", &math);
    printf("Enter the marks of the Chemistry: ");
    scanf("%d", &chemistry);
    total = (physics + chemistry + math);
    PM = physics + math;
    if (physics > 40 && chemistry > 50 && math > 60 && (PM > 150 || total > 200))
    {
        printf("You are eligible for the course\n");
    }
    else
    {
        printf("Not eligible\n");
    }
    char permit;
    printf("If You Wanna Use This Program Again.Press 'Y': ");
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
    return 0;
}