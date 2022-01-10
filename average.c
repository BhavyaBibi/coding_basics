#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    printf("Enter the 3 numbers");
    int num1, num2, num3, avg;
    scanf("%f%f%f", &num1, &num2, &num3);
    avg = (num1 + num2 + num3) / 3;

    return EXIT_SUCCESS;
}