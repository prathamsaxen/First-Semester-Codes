#include <stdio.h>
#include <conio.h>
int fibonacci_series(int a)
{
    int prev = 1, sec_prev = 0, temp, sum = 0, sum2 = 0;
    /* printf("%d,%d", sec_prev, prev); */
    for (int index = 0; index < a-2; index++)
    {
        sum = prev + sec_prev;
        sum2 += sum;
        /* printf(",%d", sum); */
        sec_prev = prev;
        prev = sum;
    }
   /*  printf("Sum =%d", sum2+1); */
return sum2+1;
}
void main()
{
start:
    printf("Welcome to our program:-");
    int upto;
    printf("\nHow Much Terms Of The Fibonacci Series You Wanna Print: ");
    scanf("%d", &upto);
  /*   fibonacci_series(upto); */
  printf("The Sum of %d terms of Fibonacci Series is %d",upto,fibonacci_series(upto));
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