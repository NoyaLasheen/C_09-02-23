#include<stdio.h>
int main()
{
    float g=0.0f,kg=0.0f;
    printf("Enter the weight in grams ");
    scanf("%f",&g);
    printf("Enter the weight in kilograms ");
    scanf("%f",&kg);
    float a=g/1000.0, b=kg*1000;
    printf("\nThe converted weight in kilogram is %.2f",a);
    printf("\nThe converted weight in gram is %.2f",b);

    return 0;
}
