#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("Enter the 3 numbers");
    float num1, num2, num3, avg;
    scanf("%f%f%f", &num1, &num2, &num3);
    avg = (num1 + num2 + num3) / 3;
    printf("Result is %f ", num1, num2, num3, avg);

    return 0;
}