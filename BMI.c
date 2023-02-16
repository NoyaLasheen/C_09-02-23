#include<stdio.h>
int main()
{
    float h=0.0f,w=0.0f,bmi;
    printf("Enter your height in centimeters\n");
    scanf("%f",&h);
    printf("Enter your weight in kilograms\n");
    scanf("%f",&w);
    h=h/100.0;
    bmi=w/(h*h);
    printf("\nYour BMI is %.2f kg/m^2",bmi);

    return 0;

}
