#include<stdio.h>
int main()
{
  char color[20];
  char pluralnoun[20];
  char celename1[20];
  char celename2[20];

  printf("Enter the Color:\n");
  scanf("%s",color);

  printf("Enter the Plural Noun:\n");
  scanf("%s",pluralnoun);

  printf("Enter the Celebrity Name:\n");
  scanf("%s%s",celename1,celename2);

  printf("Roses are %s\n",color);
  printf("%s are blue\n",pluralnoun);
  printf("I love %s %s\n",celename1,celename2);
    return 0;
}
