
#include<stdio.h>
const float add = 0.5;
 main()
{
      float v;

       printf("please enter a value to be rounded\n");
       scanf("%f", &v);

       v = v + add;
       v = (int)v;

       printf("the rounded value is %f", v);
}