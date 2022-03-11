#include <stdio.h>
#include <conio.h>
void main()
{
start:
    printf("Welcome to our program:-\n");
    int a[10][10], b[10][10], sum1=0,sum2=0,sum_final=0;
    int rows, columns;
    printf("How much rows you want in these arrays? ");
    scanf("%d", &rows);
    printf("How much Columns you want in these arrays? ");
    scanf("%d", &columns);
    printf("Enter details of matrix 'A':-\n");
    for (int index = 0; index < rows; index++)
    {
        for (int index2 = 0; index2 < columns; index2++)
        {
            printf("A[%d][%d]: ",index+1,index2+1);
            scanf("%d",&a[index][index2]);
        }
    }
    printf("Enter details of matrix 'B':-\n");
    for (int index = 0; index < rows; index++)
    {
        for (int index2 = 0; index2 < columns; index2++)
        {
            printf("B[%d][%d]: ",index+1,index2+1);
            scanf("%d",&b[index][index2]);
        }
    }
    for(int index=0;index<columns;index++)
    {
        printf("Index=%d",index);
       sum1=sum1+a[index][index];
       sum2=sum2+b[index][index];
    }
    sum_final=sum1+sum2;
    printf("The sum of diagonal elements od 'A'= %d",sum1);
    printf("\nThe sum of diagonal elements of 'B'= %d",sum2);
    printf("\nA+B=%d",sum_final);
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
