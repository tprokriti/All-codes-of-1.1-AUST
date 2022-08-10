#include<stdio.h>
int main()
{
    float sales,com,t=0;
    printf("Enter the sales to calculate the com:");
    scanf("%f",&sales);
    if(1<=sales && 10000>=sales)
    {
     com=sales*.04;
    }
    else if (10001<=sales && 20000>=sales)
    {
        com=sales*.05;
    }
    else if (20001<=sales && 30000>=sales)
    {
        com=sales*.06;
    }
    else if(30000<sales)
    {
     com=sales*.07;
    }
    else
    {
        printf("Invalid Input");
        t=1;
    }

        if(t==0)
           {
               printf("The commission is %.2f",com);
           }
    return 0;
}

