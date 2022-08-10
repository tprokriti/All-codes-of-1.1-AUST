#include<stdio.h>
int main()
{
   float h,c,t;
   printf("Input Hardness,Carbon content and Tensile :\n");
   scanf("%f%f%f",&h,&c,&t);

   if(h>60 && c<0.7 && t>5000)
    printf("Grade 10");

   else if(h>60 && c<0.7)
    printf("Grade 9");
    else if(c<0.7 && t>5000)
    printf("Grade 8");
    else if(h>60 && t>5000)
    printf("Grade 10");
     else if(h>60 || c<0.7 || t>5000)
    printf("Grade 6");
    else
        ("Grade 5");
    return 0;
}
