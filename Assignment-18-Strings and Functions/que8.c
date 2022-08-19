#include<stdio.h>
#include<conio.h>
#include<string.h>

int countWord(char str[])
{
    int i,len,count=0;
    len=strlen(str);
    for(i=0;str[i];i++)
    {
        if(str[i]==' '&&str[i+1]!=' ')
        count++;
    }
    printf("Word in string is %d",count+1);
}

int main()
{
  char str[100]="my  name   is   prince";
  
  countWord(str);
  return 0;
}