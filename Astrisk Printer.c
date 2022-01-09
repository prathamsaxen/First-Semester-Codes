#include <stdio.h>
#include <conio.h>
void main()
{
    printf("Welcome To Our Program:-\n");
    for (int index = 5; index > 0; index--)
    {
        for (int index2 = index; index2 > 0; index2--)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("Thanks for using our program.\nDeveloped by Er Pratham Saxena");
    getch();
}