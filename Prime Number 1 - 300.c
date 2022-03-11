#include <stdio.h>
#include <conio.h>
void main()
{
start:
    printf("Welcome to our program:-\n");
    int upto_num;
    printf("Upto Where You Wanna Print Prime Numbers: ");
    scanf("%d", &upto_num);
    printf("Prime Numbers Upto %d:-\n", upto_num);
    for (int index = 0; index < upto_num; index++)
    {
        int a, b, c, flag = 0;
        a = index / 2;
        b = index;
        for (c = 2; c <= a; c++)
        {
            if (b == 4)
            {
                flag = 1;
                break;
            }
            if (b % c == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            printf("%d\n", b);
        }
    }
    char permit;
    printf("If You Wanna Use This Program Again.Press 'Y': ");
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
