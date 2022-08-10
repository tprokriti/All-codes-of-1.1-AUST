#include<stdio.h>
int main()
{
    float hra,da,salary,t=0;
    printf("Enter the salary to calculate the hra and da:");
    scanf("%f",&salary);
    if(5000<=salary && 10000>=salary)
    {
     hra=salary*.1;
     da=salary*.05;
    }
    else if (10001<=salary && 15000>=salary)
    {
        hra=salary*.15;
        da=salary*.08;
    }
    else
    {
     printf("Invalid input");
        t=1;
    }

        if(t==0)
        {
         printf("The HRA is: %.2f\nThe DA is: %.2f",hra,da);
        }

    return 0;
}
