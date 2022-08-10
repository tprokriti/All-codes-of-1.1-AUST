#include <stdio.h>

int mode(int x[],int y) {
   int maxValue = 0, maxCount = 0, i, j;

   i=0;
   while (i < y)
   {
        ++i;
      int count1 = 0;

       j=0;
      while( j < y)
        {
         if (x[j] == x[i])
         ++count1;
         ++j;
      }

      if (count1 > maxCount)
        {
         maxCount = count1;
         maxValue = x[i];
      }
   }

   return maxValue;
}

int main()
{
    int x[20];
    printf("Input the twenty numbers: ");
    for(int i=0;i<20;i++)
        {
        scanf("%d",&x[i]);
        }
   printf("Mode = %d ", mode(x,20));

   return 0;
}
