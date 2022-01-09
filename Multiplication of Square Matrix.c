#include <stdio.h>
#include <conio.h>
void main()
{
start:
    printf("Welcome to our program.\n");
    int a[10][10], b[10][10], row;
    printf("Enter The Order Of Matrices:-");
    scanf("%d", &row);
    printf("Input Elements Of Array 'A':-\n");
    for (int index = 0; index < row; index++)
    {
        for (int index2 = 0; index2 < row; index2++)
        {
            printf("A[%d][%d]: ", index + 1, index2 + 1);
            scanf("%d", &a[index][index2]);
        }
    }
    printf("Input Elements Of Array 'B':-\n");
    for (int index = 0; index < row; index++)
    {
        for (int index2 = 0; index2 < row; index2++)
        {
            printf("B[%d][%d]: ", index + 1, index2 + 1);
            scanf("%d", &b[index][index2]);
        }
    }
    printf("Array 'A':-\n");
    for (int index = 0; index < row; index++)
    {
        for (int index2 = 0; index2 < row; index2++)
        {
            printf("%d", a[index][index2]);
            printf("\t");
        }
        printf("\n");
    }
    printf("Array 'B':-\n");
    for (int index = 0; index < row; index++)
    {
        for (int index2 = 0; index2 < row; index2++)
        {
            printf("%d", b[index][index2]);
            printf("\t");
        }
        printf("\n");
    }
    int result[10][10];
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < row; ++j)
        {
            for (int k = 0; k < row; ++k)
            {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    printf("Multiplied Matrix:-\n");
    printf("\nOutput Matrix:\n");
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < row; ++j)
        {
            printf("%d  ", result[i][j]);
            if (j == row - 1)
                printf("\n");
        }
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

