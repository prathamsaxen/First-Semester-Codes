#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    start:
    printf("Welcome To Our Program:-");
    float BS,DA,HRA,Net_salary;
    printf("\nEnter the basic salary of the employee: ");
    scanf("%f",&BS);
    printf("We are calculating:-\nD.A.--25%%\nH.R.A.--15%%\nNet Salary--10%% of BS+DA+HRA.");
    DA=0.25*BS;  // 25 percent of the basic salary
    HRA=0.15*BS;  // 15 percent of the basic salary
    Net_salary=BS-(0.10*(BS+DA+HRA));  
    printf("\nThe net salary of the employee is: %f",Net_salary);
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
    return 0;
}