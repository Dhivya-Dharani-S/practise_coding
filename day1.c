#include<stdio.h>

int main()
{
int number,quo,rem,result=0;
printf("The number to be checked is: ");
scanf("%d",&number);
quo=number;
while(quo!=0)
{
rem=quo%10;
result=result*10 + rem;
quo=quo/10;
}
if(number==result)
printf(" The number is a palindrome");
else
printf(" The number is not a palindrome");
return 0; 
}
