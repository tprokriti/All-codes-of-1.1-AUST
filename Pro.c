#include <stdio.h>
int main()
{
    int num,year,week,day;
    printf("Enter the value of the day :");
    scanf("%d",&num);

    year = num/365;
    num  = num%365;
    week = num/7;
    num  = num%7;
    day  = num;
    printf("%d year(s)\n%d week(s)\n%d day(s)\n", year,week,day);
    return 0;
}
