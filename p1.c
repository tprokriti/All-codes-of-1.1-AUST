#include<stdio.h>
int main()
{
    int A;
    int B;
    int ans;
    printf("Enter two digits");
    scanf("%d%d",&A,&B);

    ans = (A-B)/10;
    printf("Answer is : %d",&ans);

    return 0;
}
