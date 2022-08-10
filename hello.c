#include<stdio.h>
int main()
{
 float bsalary,gsalary,HRA,Ma,Tec,Total;
 printf("Enter the Basic Salary\n");
 scanf("%f",&bsalary,&gsalary);
 HRA = (bsalary*30)/100;
 Ma = (bsalary*5)/100;
 Tec = 1000;
 Total = HRA + Ma + Tec;
 printf("His Gross salary is :%f",Total);
    return 0;
}
