#include<stdio.h>
#include<conio.h>
#include<string.h>
void stringReverse(char str[])
{
    int i;
int len=strlen(str);
for(i=len-1;i>=0;i--)
printf("%c",str[i]);
}

int main()
{
  char str[10];
  printf("Enter a string\n");
  fgets(str,10,stdin);
  stringReverse(str);
  return 0;
}