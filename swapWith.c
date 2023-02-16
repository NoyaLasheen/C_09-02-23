//program to swap values of two variables using a third variable

#include<stdio.h>
int main()
{
    int a=2, b=5,temp;
    temp=a;
    a=b;
    b=temp;
    printf("\nAfter swapping the value of a is:%d and value of b is:%d",a,b);
    return 0;
}
