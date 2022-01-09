#include <stdio.h>
#include <conio.h>
#include<string.h>
void main()
{
start:
    printf("Welcome To Our Program:-\n");
    char str[1000],temp;
    printf("Enter The String (Max-999 Characters): ");
       getchar();
    gets(str);
    for (int index = 0; index < strlen(str); index++)
    {
        for(int index2=index+1;index2<strlen(str);index2++)
        {
            if(str[index]>str[index2])
            {
                temp=str[index];
                str[index]=str[index2];
                str[index2]=temp;
            }
        }
    }
    printf("The Sorted String ---%s---",str);
    char permit;
    printf("\nIf You Wanna Use This Program Again.Press 'Y': ");
 /*    getchar(); */
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