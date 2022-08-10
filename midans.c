#include<stdio.h>
int main()
{
    int n,num,i,j,k,p,q,r;

    for(r=10;r<=1000;r++)
    {
        n=r;
        i=n;

        for(num=0;n!=0;n=n/10)
        {
            num=(num*10)+(n%10);
        }
        j=i*i;
        q=j;
        k=num*num;

        for(p=0;j!=0;j=j/10)
        {
            p=(p*10)+(j%10);
        }
        if(p==k)
            printf("%d\n",r);
    }
        return 0;
}
