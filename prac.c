#include<stdio.h>
#include<string.h>

int main()
{
   char str[50], revstr[50];
   int i,j,len;

   printf("\n Enter any string :");
   gets(str);

   j=0;
   len=strlen(str);

   for(i=len-1;i>=0;i--)
   {
       revstr[j++]=str[i];
   }
   revstr[i]='\0';

   printf("\nThe reverse string is : %s",revstr);

   return 0;
}
