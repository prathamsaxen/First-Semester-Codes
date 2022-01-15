#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
start:
    printf("Remove Blank Space From String");
    char text[100], blank[100];
    int c = 0, d = 0;

    printf("\nEnter some text: ");

    gets(text);
    while (text[c] != '\0')
    {
        if (text[c] != ' ')
        {
            blank[d] = text[c];
            d++;
        }
        c++;
    }
    blank[d] = '\0';
    printf("Text after removing blanks\n%s\nNumber of Characters=%d\n", blank,strlen(blank));

    printf("Thanks for using our program.\nDeveloped by Er Pratham Saxena");
    getch();
}