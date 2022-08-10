#include <stdio.h>
int main()
{
    int n1,n2,greatest;
    printf("Enter the first number:\n");
    scanf("%d",&n1);
    printf("Enter the second number:\n");
    scanf("%d",&n2);
    greatest = (n1>n2)? n1 : n2;
    printf("The greatest number is %d",greatest);

 return 0;
}
