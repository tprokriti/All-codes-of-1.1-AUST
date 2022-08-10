#include<stdio.h>
int main()
{
    int i,input,flag,num,even=0,odd=0,evensum=0,oddsum=0;
    printf("Enter a number:");
    scanf("%d",&input);

    for(i=1; input!=0; i++)
    {
        flag=input%10;
        if(flag%2==0)
        {
            even++;
            evensum=evensum+flag;
        }
        else
        {
            odd++;
            oddsum=oddsum+flag;
        }
        input=input/10;
    }
    printf("Even Digit(s): %d\n",even);
    printf("Odd Digit(s):%d\n",odd);
    printf("Sum of Even Digit(s): %d\n",evensum);
    printf("Sum of Odd Digit(s):%d\n",oddsum);

    return 0;
}
