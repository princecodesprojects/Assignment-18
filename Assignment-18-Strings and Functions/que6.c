#include<stdio.h>
#include<conio.h>
#include<string.h>

void alphanumeric(char b[])
{
int i,alph=0,digts=0;

for(i=0;b[i];i++)
{
    if((b[i]>='a' && b[i]<='z') || (b[i]>='A' && b[i]<='Z'))
    {
        alph++;
    }
    else if(b[i]>='0' && b[i]<='9')
    {
        digts++;
    }
}

if(alph>1 && digts>1)
printf("%s string is alphanumeric string",b);

} 


int main()
{
    char a[]="princeshukla8850";
    alphanumeric(a);
    return 0;
}