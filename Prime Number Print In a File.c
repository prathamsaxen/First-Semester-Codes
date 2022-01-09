#include<stdio.h>
#include<conio.h>
int Primecheck(const int number)
{
    int i;

    if (number < 0)
        return 0;

    for (i = 2; i <= number / 2; i++)
    {

        if (number % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
void main()
{
    start:
    printf("Welcome To Our Program:-\n");
    FILE *a;
    int b;
    printf("Upto Where You Wanna Print Prime Numbers: ");
    scanf("%d",&b);
    a=fopen("prime.txt","w");
    int index=0;
    while (index<b)
    {
        if (Primecheck(index) == 1)
        {
            fprintf(a, "%d\n", index);
        }
        index++;
    }
    fclose(a);
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