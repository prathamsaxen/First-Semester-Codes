#include <stdio.h>
#include <conio.h>
int main()
{
start:
    printf("Welcome To Our Program:-\n");
    int arr[1000], arr2[1000], n, n2, temp;
    printf("How Much Elements You Want To Create Inside Array 1: ");
    scanf("%d", &n);
    printf("How Much Elements You Want To Create Inside Array 2: ");
    scanf("%d", &n2);
    for (int index = 0; index < n; index++)
    {
        printf("Enter A[%d]: ", index + 1);
        scanf("%d", &arr[index]);
    }
    for (int index = 0; index < n2; index++)
    {
        printf("Enter B[%d]: ", index + 1);
        scanf("%d", &arr2[index]);
    }
    /* int final[1000]; */
    for (int index = 0; index < n; index++)
    {
        for (int index2 = index + 1; index2 < n; index2++)
        {

            if (arr[index] > arr[index2])
            {
                temp = arr[index];
                arr[index] = arr[index2];
                arr[index2] = temp;
            }
        }
    }
    for (int index = 0; index < n2; index++)
    { 
        for (int index2 = index + 1; index2 < n2; index2++)
        {

            if (arr2[index] > arr2[index2])
            {
                temp = arr2[index];
                arr2[index] = arr2[index2];
                arr2[index2] = temp;
            }
        }
    }
    printf("Sorted Array 'A':-\n");
    for (int index = 0; index < n - 1; index++)
    {
        printf("%d,", arr[index]);
    }
    printf("%d", arr[n - 1]);
    printf("\nSorted Array 'B':-\n");
    for (int index = 0; index < n2 - 1; index++)
    {
        printf("%d,", arr2[index]);
    }
    printf("%d", arr2[n2 - 1]);
    int arr3[1000], n3 = n + n2;
    for (int index = 0; index < n; index++)
    {
        arr3[index] = arr[index];
    }
    int index, index2;
    for (int index = 0, index2 = n; index2 < n3 && index < n2; index++, index2++)
    {
        arr3[index2] = arr2[index];
    }
    printf("\nMerged Array:-\n");
    for (int index = 0; index < n3 - 1; index++)
    {
        printf("%d,", arr3[index]);
    }
    printf("%d", arr3[n3 - 1]);
    int i,j,k;
     for ( i = 0; i < n3; i ++)  
    {  
        for ( j = i + 1; j < n3; j++)  
        {  
            // use if statement to check duplicate element  
            if ( arr3[i] == arr3[j])  
            {  
                // delete the current position of the duplicate element  
                for ( k = j; k < n3 - 1; k++)  
                {  
                    arr[k] = arr [k + 1];  
                }  
                // decrease the size of array after removing duplicate element  
                n3--;  
                  
            // if the position of the elements is changes, don't increase the index j  
                j--;      
            }  
        }  
    }  
    printf("\nMerged Array (Duplicate Elements Removed):-\n");
    for (int index = 0; index < n3 - 1; index++)
    {
        printf("%d,", arr3[index]);
    }
    printf("%d", arr3[n3 - 1]);
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
