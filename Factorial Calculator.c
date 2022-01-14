#include<stdio.h>
#include<conio.h>
int factorial(int a)
{
    int factorial_=1;
    if (a==1)
    {
        return factorial_;
    }
    else
    {
        factorial_=a*factorial(a-1);
    }
}
void main()
{
    start:
    printf("Welcome to our program.");
    int a;
    printf("\nEnter the number whose factorial you wanna calculate: ");
    scanf("%d",&a);
    printf("Factorial[%d]=%d",a,factorial(a));
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