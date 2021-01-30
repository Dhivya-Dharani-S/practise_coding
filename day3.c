#include<stdio.h>
int main()
{
int row,column,no_rows,asc1;
printf("enter the number of rows");
scanf("%d",&no_rows);
for(row=0;row<no_rows;row++)
{
for(column=0;column<=row;column++)
{
if(row%2==0)
printf("#");
else
printf("&");
}
printf("\n");
}
}
