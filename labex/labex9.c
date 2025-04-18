#include <stdio.h>

int main()
{
    int matrix[3][3],sum = 0,arr[5];
printf("Enter 5 values:\n");
for (int i = 0; i < 5; i++)
{
        printf("Enter value %d: ", i + 1);
        scanf("%d", &arr[i]);
}
printf("\nThe entered values are:\n");
for (int i = 0; i < 5; i++)
{
        printf("%d ", arr[i]);
}
printf("\n");
printf("\nEnter values for a 3x3 matrix:\n");
for (int i = 0; i < 3; i++)
{
        for (int j = 0; j < 3; j++)
        {
            printf("Enter value [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
}
printf("\nThe entered 3x3 matrix is:\n");
for (int i = 0; i < 3; i++)
{
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
}
for (int i = 0; i < 3; i++)
{
        for (int j = 0; j < 3; j++)
        {
            sum += matrix[i][j];
        }
}
printf("\nThe sum of all elements in the 3x3 matrix is: %d\n", sum);
return 0;
}
