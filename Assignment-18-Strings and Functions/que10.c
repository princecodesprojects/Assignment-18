#include<stdio.h>
#include<conio.h>
#include<string.h>

void repeatedCharacter(char str[])
{
    int freq[150]={0};
    int i,j;
for(i=0;str[i]!='\0';i++)
{
    
   freq[str[i]]++;
}

for(i=0;i<150;i++)
{
    if(freq[i]>1)
   printf("%c ",i);
}
}

int main()
{
  char str[]="princernc";
  
  repeatedCharacter(str);
  return 0;
}