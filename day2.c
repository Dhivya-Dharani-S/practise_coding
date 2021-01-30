#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
int n,half,avg1=0,avg2=0,avg,avg3;
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
half=n/2;
for(int j=0;j<half;j++)
{
avg1+=a[j];
}
for(int k=half;k<n;k++)
{
avg2+=a[k];
}
avg=avg1/half;
avg3=avg2/half;
if(avg<avg3)
{
printf("%d",avg3);
}
else{
    printf("%d",avg);
}
    return 0;
}
