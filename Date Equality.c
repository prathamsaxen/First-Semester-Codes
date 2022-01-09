#include <stdio.h>
#include <conio.h>
struct dates
{
    int day;
    int month;
    int year;
} a, b;
void main()
{
start:
    printf("Welcome To Program:-\n");
    printf("Enter Date Of 'A'");
    printf("\nDay: ");
    scanf("%d", &a.day);
    printf("Month: ");
    scanf("%d", &a.month);
    printf("Year: ");
    scanf("%d", &a.year);
    printf("Enter Date Of 'B'");
    printf("\nDay: ");
    scanf("%d", &b.day);
    printf("Month: ");
    scanf("%d", &b.month);
    printf("Year: ");
    scanf("%d", &b.year);
    if (a.day == b.day && a.month == b.month && a.year == b.year)
    {
        printf("Date [A] = Date [B]");
    }
    else
    {
        printf("Not Equal.");
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