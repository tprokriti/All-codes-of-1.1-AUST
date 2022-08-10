#include<stdio.h>
int main()
{
    int x,y,sum;
    printf("Input two numbers:\n");
    scanf("%d%d", &x,&y);
    sum=x+y;
    if(sum%5!=0 && sum%3==0)
        printf("True");
    else
        printf("False");
    return 0;
}
