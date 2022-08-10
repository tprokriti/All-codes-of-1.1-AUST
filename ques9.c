#include <stdio.h>
int main()
{
    int a,sum=0,i=0,av=0;
    printf("Enter the number:");
    scanf("%d",&a);
    for(;a!=0;)
    {
     sum=sum+ a%10;
    a= a/10;
    i++;
    }
    av=sum/i;
    printf("%d\n%d",sum,av);
    return 0;



}
