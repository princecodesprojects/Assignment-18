#include<stdio.h>
#include<conio.h>

int length(char str[])
{
    int i;
    for(i=0;str[i];i++);
    return i;
}

int main()
{
  char str[10];
  printf("Enter a string\n");
  fgets(str,10,stdin);
  int len=length(str);
  printf("Lenght is %d",len-1);
  return 0;
}