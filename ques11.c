#include<stdio.h>
int main()
{
    int n,num;
    printf("Enter any number:\n");
    scanf("%d",&n);

    for(num=0;n!=0;n=n/10)
    {
        num=(num*10)+(n%10);
    }
    for(;num!=0;)
    {
        switch(num%10)
        {
        case 0:
            printf("Zero\t");
            break;
        case 1:
            printf("One\t");
            break;
        case 2:
            printf("Two\t");
            break;
        case 3:
            printf("Three\t");
            break;
        case 4:
            printf("Four\t");
            break;
        case 5:
            printf("Five\t");
            break;
        case 6:
            printf("Six\t");
            break;
        case 7:
            printf("Seven\t");
            break;
        case 8:
            printf("Eight\t");
            break;
        case 9:
            printf("Nine\t");
            break;


        }
        num=num/10;
    }
    return 0;
}
