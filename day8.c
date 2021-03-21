#include <stdio.h>
int main() {
   int n;
    int median1=0,median2=0,median;
    scanf("%d",&n);
    int a[n],b[n];
    for(int i=0;i<n;i++)
    {
scanf("%d",&a[i]);
    }
    for(int j=0;j<n;j++)
    {
scanf("%d",&b[j]);
    }
int mid=n/2;
    if(n%2!=0)
    {
median=(a[mid]+b[mid])/2;
        printf("%d",median);
    }
    else{
        median1=(a[mid]+a[mid-1])/2;
        median2=(b[mid]+b[mid-1])/2;
        median=(median1+median2)/2;
        printf("%d",median);
    }
    return 0;
}
