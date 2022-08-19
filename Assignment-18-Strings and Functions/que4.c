#include<stdio.h>
#include<conio.h>
#include<string.h>

void stringUppercase(char str[])
{
    int i;
    for(i=0;str[i];i++)
    {
        if(str[i]>='a'&&str[i<='z'])
       printf("%c",str[i]-32);
    }
}

int main()
{
  char str[10];
  printf("Enter a string\n");
  fgets(str,10,stdin);
  stringUppercase(str);
  return 0;
}