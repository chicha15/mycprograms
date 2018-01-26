#include <stdio.h>
 int main()
{
    float rad,area, perm;
 
    printf("Enter radius of circle");
    scanf("%f",&rad);
 
    area=22.0/7*rad*rad;
perm=2*22.0/7*rad;
 
    printf("Area of circle%f \nPerimeter of circle%f\n",area,perm);
    return 0;
}