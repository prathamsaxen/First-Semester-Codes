#include<stdio.h>
#include<conio.h>
void main()
{
    start:
    printf("Welcome To Program:-\n");
    int hcf,num1,num2;
    printf("Enter Number A: ");
    scanf("%d",&num1);
    printf("Enter Number B: ");
    scanf("%d",&num2);
    for(int index=1;index<num1 && index<num2;index++)
    {
        if(num1%index==0 && num2%index==0)
        {
          hcf=index;
        }
       
    }
      printf("H.C.F.[%d][%d]=%d",num1,num2,hcf);
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
        printf("Thanks for using our program.\nDeveloped by Er Pratham Saxena");
    }
    getch();
}