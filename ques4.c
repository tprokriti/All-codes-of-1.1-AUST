#include<stdio.h>
int main()
{
    int year;
    printf("Enter the Year:\n");
    scanf("%d",&year);

    if((year%400==0)||(year%100!=0&&year%4==0))
        printf("This is Leap Year");
    else
        printf("This is not a Leap Year");
    return 0;
}
