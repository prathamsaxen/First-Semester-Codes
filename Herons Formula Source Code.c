#include <stdio.h>
#include <conio.h>
#include<math.h>
float area_triangle(float x,float y,float z)
{
    float temp=x+y+z;
    float s=temp/2;
    float temp2=s*(s-x)*(s-y)*(s-z);
    float area=sqrt(temp2);
    return area;
}
void main()
{
    printf("Welcome To Our Program:-\n");
    float a, b, c;
    printf("Enter The Vertices Of Triangle:-\n");
    printf("Enter Side 'A':");
    scanf("%f",&a);
    printf("Enter Side 'B':");
    scanf("%f",&b);
    printf("Enter Side 'C':");
    scanf("%f",&c);
    printf("Area=%f units",area_triangle(a,b,c));
    printf("\nDeveloped by Er Pratham Saxena");
    getch();
}