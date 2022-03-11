#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int factorial(int a)
{
    int fac=1;
    if(a==1)
    {
        return fac;
    }
    else 
    {
        fac=a*factorial(a-1);
    }
    return fac;
}
int main(int argc, char const *argv[])
{
    printf("Factorial [%d]=%d",atoi(argv[1]),factorial(atoi(argv[1])));
    printf("\nThanks for using our program.");
    getch();
    return 0;
}
