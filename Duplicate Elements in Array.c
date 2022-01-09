#include<stdio.h>
#include<conio.h>
void main()
{
    start:
    printf("Welcome to our Program:-\n");
    int arr[100],size;
    printf("How Much Elements In Array You Wanna Create: ");
    scanf("%d",&size);
    for(int index=0;index<size;index++)
    {
        printf("Enter Element [%d]: ",index+1);
        scanf("%d",&arr[index]);
    }
    printf("Entered Array:-\n");
    for(int index=0;index<size-1;index++)
    {
        printf("%d,",arr[index]);
    }
    printf("%d",arr[size-1]);
    int i,j,k;  
    // use nested for loop to find the duplicate elements in array  
    for ( i = 0; i < size; i ++)  
    {  
        for ( j = i + 1; j < size; j++)  
        {  
            // use if statement to check duplicate element  
            if ( arr[i] == arr[j])  
            {  
                // delete the current position of the duplicate element  
                for ( k = j; k < size - 1; k++)  
                {  
                    arr[k] = arr [k + 1];  
                }  
                // decrease the size of array after removing duplicate element  
                size--;  
                  
            // if the position of the elements is changes, don't increase the index j  
                j--;      
            }  
        }  
    }  
    printf("\nArray After Removing Duplicate Elements:-\n");
    for(int index=0;index<size-1;index++)
    {
        printf("%d,",arr[index]);
    }
    printf("%d",arr[size-1]);
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


}