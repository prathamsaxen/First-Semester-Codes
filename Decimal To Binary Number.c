#include <stdio.h>
#include <conio.h>
int main()
{
start:
    printf("Program to Convert Decimal Number into Binary\n");
    int arr[10], num, i, j;
    printf("Please Give a Number to Convert in Binary:  ");
    scanf("%d", &num);
    printf("Binary Number of %d is =  ", num);
    for (i = 0; num > 0; i++)
    {
        arr[i] = num % 2;
        num = num / 2;
    }
    for (j = i - 1; j >= 0; j--)
    {
        printf(" %d ", arr[j]);
    }
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
    return 0;
    getch();
}
