#include <stdio.h>
#include <conio.h>
void main()
{
start:
    printf("Check a number is Armstrong or Not:-\n");
    int num, sum=0,remainder,temp;
    printf("Enter The Number: ");
    scanf("%d", &num);
    temp=num;
    while (num > 0)
    {
        remainder=num%10;
        sum=sum+remainder*remainder*remainder;
        num=num/10;
        /* printf("h-%d",num); */
    }
/*     printf("Sum=%d",sum);
 */    if (temp==sum)
    {
        printf("Entered Number is Armstrong.");
    }
    else 
    {
        printf("Entered Number is not Armstrong.");
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
