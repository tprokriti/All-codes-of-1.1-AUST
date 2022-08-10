#include<stdio.h>
int main()
{
    int salary,tax;
    scanf("%d",&salary);

    switch(salary)
    {
    case 7500 ... 8999:
        tax = (salary/100)*30;
        printf("%d is the income tax ",tax);
        break;
    case 0 ... 7499:
        tax = (salary/100)*20;
        printf("%d is the income tax",tax);
        break;
    default:
        tax = (salary/100)*40;
        printf("%d is the income tax", tax);
        return 0;
    }



}
