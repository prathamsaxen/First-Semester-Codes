#include<stdio.h>
#include<conio.h>
float react_area(float a,float b)
{
    return a*b;
}
void main()
{
    printf("Area Of Rectangle:-\n");
    float length,breadth;
    printf("Enter The Length of Reactangle: ");
    scanf("%f",&length);
    printf("Enter The Breadth Of Rectangle: ");
    scanf("%f",&breadth);
    printf("Area :- %f",react_area(length,breadth));
    printf("\nDeveloped by Madhvendra Singh");
    getch();
    }
