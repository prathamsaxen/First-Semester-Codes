#include <stdio.h>
#include <conio.h>
void main()
{
start:
    printf("Welcome to our program:-\n");
    int a[10][10], b[10][10];
    int rows, columns;
    printf("How much rows you want in this arrays? ");
    scanf("%d", &rows);
    printf("How much Columns you want in this arrays? ");
    scanf("%d", &columns);
    printf("Enter details of matrix 'A':-\n");
    for (int index = 0; index < rows; index++)
    {
        for (int index2 = 0; index2 < columns; index2++)
        {
            printf("A[%d][%d]: ", index + 1, index2 + 1);
            scanf("%d", &a[index][index2]);
        }
    }
    // computing the transpose
    for (int index = 0; index < rows; ++index)
    {
        for (int index2 = 0; index2 < columns; ++index2)
        {
            b[index2][index] = a[index][index2];
        }
    }
    // printing transpose
    printf("Transposed Matrix:-\n");
    for (int index = 0; index < rows; ++index)
    {
        for (int index2 = 0; index2 < columns; ++index2)
        {
            printf("%d", b[index][index2]);
            printf("\t");
        }
        printf("\n");
    }
    // check Syymetric matrix
    int flag = 0;
    for (int index = 0; index < rows; index++)
    {
        for (int index2 = 0; index2 < columns; index2++)
        {
            if (a[index][index2] == b[index][index2])
            {
                flag = flag + 1;
            }
        }
    }
    if (flag == rows * columns)
    {
        printf("Symmetric Matrix");
    }
    else
    {
        printf("Non Symmetric Matrix");
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
    getch();
}
