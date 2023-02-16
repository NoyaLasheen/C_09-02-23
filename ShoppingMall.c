#include<stdio.h>
int main()
{
    float p1,p2,p3,v=0.0f,t=0.0f;
    int q1,q2,q3;
    printf("\nEnter the quantity of each product");
    scanf("%d%d%d",&q1,&q2,&q3);
    printf("\nEnter the price of each product");
    scanf("%f%f%f",&p1,&p2,&p3);
    v=(p1*q1)+(p2*q2)+(p3*q3);
    printf("The total price is %f",v);
    t=v-(v/10.0);
    printf("The total price after discount is %f",t);
    return 0;

}
