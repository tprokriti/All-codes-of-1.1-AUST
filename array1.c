#include<stdio.h>
void main()
{
    int a[5], i;
    printf("Enter the array elements:\n");
    for(i=0; i<5; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<5; i++)
        printf("\narray element at index %d is:%d",i,a[i]);
    for(i=4; i>=0; i--)
        printf("\narray element at index %d is :%d",i,a[i]);


    int b[5],j;
    float sum=0,avg=0;
    printf("Enter the elements:\n");
    {
        for(j=0;j<5;j++)
        scanf("%d",&b[j]);
    }
    for(j=0; j<5; j++)
    {
        sum = sum + b[j];
    }
    printf("Sum =%f",sum);
    avg = sum/5;
    printf("\nAverage = %f",avg);


    int c[5],d[5],e[5],k;
    printf("Enter the array elements:");

    for(k=0;k<5;k++)
    {
        scanf("%d",c[5]);
    }
    for(k=0;k<5;k++)
    {
        scanf("%d",d[5]);
    }
    for(k=0;k<5;k++)
        sum1 = c[5] + d[5];
    printf("Sum = %d",)

}
