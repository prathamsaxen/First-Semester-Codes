#include<stdio.h>
#include<math.h>
#include<conio.h>

// function for finding factorial
int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
      f=f*i;
    return f;
}

// driver function

int main()
{
    start:
    printf("Welcome to program.");
    int n,sum=1,i,f,X,p;
    printf("Enter the value of X and n\n");
    scanf("%d%d",&X,&n);
    for(i=1;i<=n;i++)
    {
        f=fact(i);
        p=pow(X,i);
        if(i%2==0)
          sum=sum+(p/f);
        else
          sum=sum-(p/f);
    }
    printf("Sum of the series is: %d",sum);
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
        printf("Thanks for using our program.\nDeveloped by Madhvendra Singh");
    }
    getch();
    return 0; 
}
