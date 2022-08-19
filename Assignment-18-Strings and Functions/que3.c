#include<stdio.h>
#include<conio.h>
#include<string.h>

int  stringCompare(char str[],char str1[])
{
    int x= strcmp(str,str1);
    return x;
}

int main()
{
  char str[10];
  char str1[10];
  printf("Enter a string\n");
  fgets(str,10,stdin);
  printf("Enter another string\n");
  fgets(str1,10,stdin);
  int rslt=stringCompare(str,str1);
  if(rslt==1)
  printf("Srtings are opposite of dectionary order\n");
  else
  printf("Srtings are equal\n");
  if(rslt==-1)
  printf("Srtings are in dectionary order\n");
  return 0;
}