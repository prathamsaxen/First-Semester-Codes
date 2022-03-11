#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    start:
    printf("Welcome to our program\n");
    char s1[1000], s2[1000];
    printf("Enter  the string: ");
    scanf("%s", s1);
    strcpy(s2, s1);
    strrev(s2);
    if (!strcmp(s1, s2))
        printf("string is palindrome");
    else
        printf("string is not palindrome");
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
    return 0;
}
