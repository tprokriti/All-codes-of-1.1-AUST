#include<stdio.h>
#include<string.h>

int main()
{
   int n, i,j[10];
   int even=0,odd=0;

   printf("\nEnter the size of the array:");
   scanf("%d",&n);

   printf("\nEnter the numbers:");

   for(i=0;i<n;i++)
   {
       scanf("%d", &j[i]);
   }
   for(i=0;i<n;i++)


       {
           if(j[i]%2==0)
           {
               printf("%d",j[i]);
        }
       }
       for(i=0;i<n;i++)
       {
           if(i[i]%2!=0);
           {
               printf("%d",j[i]);
           }
       }
   }
   return 0;
