#include<stdio.h>
#include<conio.h>
void main()
{
    start:
    printf("Welcome To Our Program:-\n");
    int num,temp,remainder;
    printf("Upto Where You Wanna Find Armstrong Number: ");
    scanf("%d",&num);
    printf("Armstrong Numbers Upto %d is printed below:-\n",num);
    for (int index=0;index<num;index++)
    {
        int sum=0;
        temp=index;
        while(temp >0)
        {
            remainder=temp%10;
            sum=sum+remainder*remainder*remainder;
            temp=temp/10;
            /* printf("Temp_run=%d",temp_rem); */
        }
        if (sum==index)
        {
            printf("%d,\n",index);
        }
    }
    char permit;
    printf("If You Wanna Use This Program Again.Press 'Y': ");
    getchar();
    scanf("%c", &permit);
    if (permit == 'Y' || permit == 'y')
    {
        printf("Redirecting To Program \n");
        goto start;
    }
    else
    {
        printf("Thanks for using our program.\nDeveloped by Madhvendra Singh");
    }
    getch();
}
