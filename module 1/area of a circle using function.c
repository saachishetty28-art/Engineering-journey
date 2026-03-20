// finding the area of the circle using function 
#include<stdio.h>
#define pi 3.14
float area (int r);
void main()
{
    int r=10;
    printf("the area of the circle is %f",area(r));
}
float area (int r)
{
    return pi*r*r;
}
