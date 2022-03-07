#include <stdio.h>
#include <conio.h>
int main()
{
start:
    printf("Welcome To Our Program:-\n");
    for (int index = 3; index > 0; index--)
    {
        for (int index2 = index; index2 > 0; index2--)
        {
            printf("%d", index2);
        }
        printf("\n");
    }
    printf("Thanks for using our program.\nDeveloped by Madhvendra Singh");
    return 0;
    getch();
}
