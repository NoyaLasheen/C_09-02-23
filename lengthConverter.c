#include<stdio.h>
int main()
{
    float m,cm,mm,km;
    printf("Enter the length in meters ");
    scanf("%f",&m);
    cm=m*100;
    mm=m*1000;
    km=m/1000.0;
    printf("\nThe length in centimeters is %.2f",cm);
    printf("\nThe length in millimeters is %.2f",mm);
    printf("\nThe length in kilometers is %.2f",km);

    return 0;
}
