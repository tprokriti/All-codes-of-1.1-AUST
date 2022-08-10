#include<stdio.h>
int sum(int)
int main();
{
    int a;
    scanf("%d",&a);
    printf("Sum = %d",sum(a));
}
int sum(int a);
{
        int x;
        while(a!=0)
        {
            x=x+x%10;
            x=x/10;
            return 0;
        }
