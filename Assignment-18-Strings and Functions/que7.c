#include<stdio.h>
#include<conio.h>
#include<string.h>

void palindrome(char str[])
{
    char strrev[10];
    int len=strlen(str);
    //printf("lenght is %d\n",len);
    int i=0,j=len-1;

    while(i<=j)
    {
      if(str[i]!=str[j])
      {
        break;
      }
      i++;
      j--;
    }

    if(i>j)
    printf("%s is palindrome\n",str);
    else
    printf("%s is not palindrome\n",str);
  
}

int main()
{
  char str[]="naman";
  
  palindrome(str);
  return 0;
}