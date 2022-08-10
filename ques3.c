#include <stdio.h>
int main()
{
    int ch;
    float r, area, cir;
    printf("Enter the Radius of the circle\n");
    scanf("%f",&r);
    printf("Choose what do you want\?\n 1.Area or 2.Circumference\?\nIf Area,press 1\n If Circumference, press 2\n");
    scanf("%d", &ch);
    if(ch==1)
    {
      area= 3.1416*r*r;
        printf("The area is %.2f\n",area);
    }
    else if(ch==2)
    {
    cir=2*3.1416*r;
    printf("The circumference is %.2f\n",cir);
    }
    else
        printf("Invalid choice");
    return 0;
}
