#include <stdio.h>
int main()
{
    int ch;
    float radius, area, circumference;
    printf("Enter the Radius of the circle\n");
    scanf("%f",radius);
    printf("Choose what do you want\?\n 1.Area or 2.Circumference\?\nIf Area,press 1\n if Circumference press 2\n");

    if(ch==1)
    {
      area= 3.1416*radius*radius;
        printf("Area is %.2f\n",area);
    }
    else if(ch==2)
    {
                circumference=2*3.1416*radius;
    printf("Circumference is %.2f\n",circumference);
    }
    else
        printf("Invalid choice");
    return 0;
}
