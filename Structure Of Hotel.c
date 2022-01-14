#include <stdio.h>
#include <conio.h>
struct Hotel_Information
{
    char Hotel_name[100];
    char address[200];
    int grade;
    int room_charge;
    int num_of_rooms_issued;
};
void main()
{
start:
    printf("Welcome to our program:-\n");
    int a;
    struct Hotel_Information data[10];
    printf("How much hotels do you have: ");
    scanf("%d",&a);
    printf("You Can Store Data Of %d Hotels Here...",a);
    for(int index=0;index<a;index++)
    {
        printf("\nDetails oF Hotel [%d]:-\n",index+1);
        printf("Enter Name Of Hotel [%d]: ",index+1);
        getchar();
        gets(data[index].Hotel_name);
        printf("Enter Adress Of Hotel [%d]: ",index+1);
        gets(data[index].address);
        printf("Rating Out Of 7 Star[%d]: ",index+1);
        scanf("%d",&data[index].grade);
        printf("Number of Rooms in your building [%d]: ",index+1);
        scanf("%d",&data[index].num_of_rooms_issued);
        printf("Charges of Room [%d]: ",index+1);
        scanf("%d",&data[index].room_charge);
        printf("\n");
    }    
    for(int index=0;index<a;index++)
    {
        printf("Details of Hotel[%d]:-\n",index+1);
        printf("'%s'",data[index].Hotel_name);
        printf("\nAdd-%s",data[index].address);
        printf("\nGrades--%d",data[index].grade);
        printf("\nNumber of Rooms--%d",data[index].num_of_rooms_issued);
        printf("\nCharges of Rooms--%d inr",data[index].room_charge);
        printf("\n\n");
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
        printf("Thanks for using our program.\nDeveloped by Er Pratham Saxena");
    }
    getch();
}
