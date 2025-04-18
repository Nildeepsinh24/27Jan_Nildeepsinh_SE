#include <stdio.h>

int main()
{
    printf("Using break (Stops at 5):\n");
    for (int i = 1; i <= 10; i++)
    {
        if (i == 5)
        {
            break;
        }
        printf("%d ", i);
    }
    printf("\n\n");

    printf("Using continue (Skips 3):\n");
    for (int i = 1; i <=5; i++)
    {
        if (i == 3)
            {
            continue;
            }
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
