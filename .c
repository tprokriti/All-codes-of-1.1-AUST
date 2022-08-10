#include <stdio.h>
int main ()
{
    int number ;
    printf ("\n Please enter any number to check whether it is Divisible by 5 :");
    scanf("%d", &number);
    if (number % 5 == 0 )
        printf("|n Given number %d is Divisible by 5", number);
    else
        printf("\n Given number %d is not Divisible by 5 , number");
    return 0 ;
}
