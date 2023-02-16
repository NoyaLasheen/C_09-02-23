#include<stdio.h>
int main()
{
    //simple interest = p*r*t/100.0
    //a=p+si

    float p=2300.56,r=3.4f,t,a=0.0f,si=0.0f;
    si=(p*r*t)/100.0;
    a=p+si;
    printf("The simple interest is:%.2f and final amount is:%.2f",si,a);


}

