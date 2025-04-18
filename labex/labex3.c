#include <stdio.h>
void main()
{
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    printf("\n--- Arithmetic Operations ---\n");
    printf("Addition: %d\n", a + b);
    printf("Subtraction: %d\n", a - b);
    printf("Multiplication: %d\n", a * b);
    printf("Division: %d\n", a / b);
    printf("Modulus: %d\n", a % b);

    printf("\n--- Relational Operations ---\n");
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);
    printf("a > b: %d\n", a > b);
    printf("a < b: %d\n", a < b);
    printf("a >= b: %d\n", a >= b);
    printf("a <= b: %d\n", a <= b);

    printf("\n--- Logical Operations ---\n");
    printf("(a > b) && (b > 0): %d\n", (a > b) && (b > 0));
    printf("(a > b) || (b < 0): %d\n", (a > b) || (b < 0));
    printf("!(a == b): %d\n", !(a == b));

}
