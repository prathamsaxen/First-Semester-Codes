#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
start:
    printf("Welcome To Our Program:-\n");
    int a, b, c;
    printf("Enter The Cofficient of Equation 'Ax^2+Bx+C'\n");
    printf("Enter 'A': ");
    scanf("%d", &a);
    printf("Enter 'B': ");
    scanf("%d", &b);
    printf("Enter 'C': ");
    scanf("%d", &c);
    printf("Your Equation = %dx^2+%dx+%d", a, b, c);
    float d, temp1, temp2, x1, x2,real,img;
    d = b * b - 4 * a * c;
    printf("\nYour Discriminant=%f", d);
    // For Roots
      if (d > 0)  
    {  
    x1 = (-b + sqrt(d)) / (2 * a);  
    x2 = (-b + sqrt(d)) / (2 * a);  
    printf("\n Value of root1 = %.2f and value of root2 = %.2f", x1, x2);  
    }  
    // elseif condition defines both roots ( real and equal root) are equal in the quadratic equation  
    else if (d == 0)  
    {  
        x1 = x2 = -b / (2 * a); // both roots are equal;  
        printf("\n Value of root1 = %.2f and Value of root2 = %.2f", x1, x2);  
    }  
    // if det < 0, means both roots are real and imaginary in the quadratic equation.  
    else {  
        real = -b / (2 * a);  
        img = sqrt(-d) / (2 * a);  
        printf("\nValue of root1 = %.2f + %.2fi and value of root2 = %.2f - %.2fi ", real, img, real, img);  
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
        printf("Thanks for using our program.\nDeveloped by Madhvendra Singh");
    }
    getch();
}
