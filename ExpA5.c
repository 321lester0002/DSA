//Write a C program to find largest element in an array
#include <stdio.h>
#define prog_without_main main //to run a program without using main()
int prog_without_main()
{
    int n, i, max=0, a[20];//declaration
    
    //Taking input from user
    printf("Enter number of elements : ");
    scanf("%d", &n);
    for ( i = 0; i < n; i++)
    {
        printf("\nEnter element %d : ", i+1);
        scanf("%d", &a[i]);

        if (max < a[i]) //checks if input is greater than existing value of max and changes value of max if true
        {
            max = a[i];
        }       
    }

    printf("\nThe largest element in the array is : %d ", max); //printing the largest number in the array

}
