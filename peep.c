#include <stdio.h>
int main ()
{
    int age;
    printf("Enter the value of age:");
    scanf("%d", &age);

    if(age<2)
    {
       printf("small child\n");
    }
    else if(age>2)
    {
        printf("child\n");
    }
    else if(age>8)
    {
        printf("Big Child\n");
    }
    else
    {
        printf("old\n");
    }
    return 0;

}
