#include<stdio.h>
int main()
{
    int a,b,n,d;
    char c='A';
    scanf("%d",&n);

    for(a=1;a<=n;a++)
    {
        for(d=1;d<=n-a;d++)
            printf(" ");
        c='A';
        for(b=1;b<=a;b++)
        {
            printf("%c",c);
            c++;
        }

            printf("\n");

    }
    return 0;
}
