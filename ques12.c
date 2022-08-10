#include<stdio.h>
int main()
{
    int n,reminder=0,binary=0,place=1;
    printf("Enter a Decimal Number:\n");
    scanf("%d",&n);
    for(;n!=0;)
    {
        reminder = n%2;
        n=n/2;
        binary=binary+(reminder*place);
        place=place*10;
    }
    printf("The Binary value is:%d",binary);
    return 0;
}
